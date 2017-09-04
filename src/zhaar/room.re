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

type cell =
  | Empty
  | Full
  | C cellContents;

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

let empty = {doors: [], label: "", secretDoors: [], walls: []};

let make ::doors=[] ::secretDoors=[] ::label="" ::walls=[] () =>
  C {label, doors, secretDoors, walls};