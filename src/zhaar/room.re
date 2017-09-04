type dir =
  | N
  | S
  | E
  | W;

type cellContents = {
  doors: list dir,
  label: string,
  secretDoors: list dir,
  walls: list dir
};

type cell = option cellContents;
let c a => Some a;

/* TODO don't duplicate HTML poorly */
type note =
  | L (list string)
  | P string;

type room = {
  cells: list (list cell),
  x: int,
  y: int,
  title: string,
  notes: list note
};

let empty_ = {doors: [], label: "", secretDoors: [], walls: []};

let empty = Some empty_;

let make ::doors=[] ::secretDoors=[] ::label="" ::walls=[] () =>
  Some {label, doors, secretDoors, walls};