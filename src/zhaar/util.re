let rec range ::a=0 b =>
  if (a > (b - 1)) {
    []
  } else {
    [a, ...range a::(a + 1) b]
  };

let repeat n i => List.map (
  fun _ => i
) (range n);