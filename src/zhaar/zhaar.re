open ReasonReact;

open Room;

let height = 20.0;

let width = 20.0;

let edgeWidth = 0.10;

let halfEdge = edgeWidth /. 2.0;

let offset = halfEdge *. (-1.0);

let space = 1.0 -. edgeWidth;

let halfSpace = 1.0 -. halfEdge;

let edgeFor dir =>
  switch dir {
  | N => (0.0, 1.0, offset, edgeWidth)
  | S => (0.0, 1.0, halfSpace, edgeWidth)
  | E => (halfSpace, edgeWidth, 0.0, 1.0)
  | W => (offset, edgeWidth, 0.0, 1.0)
  };

let makeEdge color dir x y => {
  let (xOffset, xScale, yOffset, yScale) = edgeFor dir;
  let edgeX = string_of_float (width *. (xOffset +. float_of_int x));
  let edgeY = string_of_float (height *. (yOffset +. float_of_int y));
  <rect
    x=edgeX
    y=edgeY
    width=(string_of_float (width *. xScale))
    height=(string_of_float (height *. yScale))
    fill=color
    key=("edge-" ^ edgeX ^ "/" ^ edgeY)
  />
};

let makeDoor = makeEdge "#ff0000";

let makeSecretDoor = makeEdge "00ffff";

let makeWall = makeEdge "#000000";

let doWalls x y {walls} => List.map (fun wall => makeWall wall x y) walls;

let or_ default value =>
  switch value {
  | None => default
  | Some actual => actual
  };

let mmap fn it =>
  switch it {
  | Some x => Some (fn x)
  | None => None
  };

let makeSecretDoors x y {secretDoors} => List.map (fun dir => makeSecretDoor dir x y) secretDoors;

let makeDoors x y {doors} => List.map (fun dir => makeDoor dir x y) doors;

type world =
  | Swamp
  | Zhaar;

type state = {
  currentWorld: world,
  currentRoom: option int
};

let selectRoom idx {state} => Update {...state, currentRoom: idx};

let cmap fn cell =>
  switch cell {
  | C contents => Some (fn contents)
  | _ => None
  };

let drawCell update isSelected x y roomIdx contents => {
  let color =
    switch contents {
    | Full => "#000000"
    | Empty => if isSelected {"#f3f302"} else {"#ffffff"}
    | C _ => if isSelected {"#f3f302"} else {"#ffffff"}
    };
  let cellX = float_of_int x *. width;
  let cellY = float_of_int y *. height;
  let cell =
    <rect
      x=(string_of_float cellX)
      y=(string_of_float cellY)
      width=(string_of_float width)
      height=(string_of_float height)
      onClick=(update (fun _ => selectRoom (Some roomIdx)))
      key=("cell-" ^ string_of_float cellX ^ "/" ^ string_of_float cellY)
      fill=color
    />;
  let label =
    cmap
      (
        fun {label} =>
          <text
            x=(string_of_float cellX)
            y=(string_of_float (cellY +. height))
            textAnchor="start"
            key=("text-" ^ string_of_float cellX ^ "/" ^ string_of_float cellY)>
            (stringToElement label)
          </text>
      )
      contents |>
    or_ nullElement;
  let doors = cmap (makeDoors x y) contents |> or_ [];
  let secretDoors = cmap (makeSecretDoors x y) contents |> or_ [];
  let walls = cmap (doWalls x y) contents |> or_ [];
  (cell, (List.flatten [doors, walls, secretDoors], label))
};

type renderedCell = {
  cell: reactElement,
  extraEls: list reactElement,
  label: reactElement
};

let roomRow update isSelected origX y roomIdx rowData =>
  List.mapi
    (
      fun x contents => {
        let (cell, (extraEls, label)) = drawCell update isSelected (x + origX) y roomIdx contents;
        {cell, extraEls, label}
      }
    )
    rowData;

let drawRoom update selected roomIdx {x: origX, y: origY, cells} => {
  open List;
  let isSelected = mmap ((==) roomIdx) selected |> or_ false;
  mapi (fun y row => roomRow update isSelected origX (origY + y) roomIdx row) cells |> concat
};

let string_of_world world =>
  switch world {
  | Swamp => "swamp"
  | Zhaar => "zhaar"
  };

let draw update selected rooms => List.mapi (drawRoom update selected) rooms |> List.concat;

let selectedRoom world selected => mmap (fun idx => List.nth world idx) selected;

let renderNote note =>
  switch note {
  | P string => <p> (stringToElement string) </p>
  | L items =>
    <ul>
      (
        items |> List.map (fun note => <li> (stringToElement note) </li>) |> Array.of_list |> arrayToElement
      )
    </ul>
  };

let renderNotes notes => <div> (arrayToElement (Array.of_list (List.map renderNote notes))) </div>;

let notes world {currentRoom} =>
  <div style=(ReactDOMRe.Style.make width::"50%" ())>
    <p> <strong> (stringToElement "Notes") </strong> </p>
    (selectedRoom world currentRoom |> mmap (fun {notes} => renderNotes notes) |> or_ nullElement)
  </div>;

let selectWorld world {state} => Update {...state, currentWorld: world};

let picker update =>
  <div>
    <button onClick=(update (fun _ => selectWorld Zhaar))>
      (stringToElement (string_of_world Zhaar))
    </button>
    <button onClick=(update (fun _ => selectWorld Swamp))>
      (stringToElement (string_of_world Swamp))
    </button>
  </div>;

let app update state => {
  let world = Sanctum.world;
  <div style=(ReactDOMRe.Style.make display::"flex" ())>
    (picker update)
    <svg width="900" height="900" style=(ReactDOMRe.Style.make backgroundColor::"#000000" ())>
      (
        arrayToElement (
          Array.of_list (
            List.concat (
              List.map
                (fun {cell, label, extraEls} => [cell, label, ...extraEls])
                (draw update state.currentRoom world)
            )
          )
        )
      )
    </svg>
    (notes world state)
  </div>
};

let changeWorld newWorld _id state => Update {...state, currentWorld: newWorld};

let component = statefulComponent "Zhaar";

let make _children => {
  ...component,
  initialState: fun () => {currentWorld: Zhaar, currentRoom: None},
  render: fun {state, update} => app update state
};