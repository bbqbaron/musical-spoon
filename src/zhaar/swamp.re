open Room;

open Util;

let world = [
  {
    x: 13,
    y: 0,
    cells: [[c {...empty_, label: "G"}]],
    title: "The Heart of the Moors",
    notes: [
      P "Wherein the PCs pass from ordinary swamp into the moss-shrouded domain of a lost, near-forgotten plant god"
    ]
  },
  {
    x: 14,
    y: 0,
    title: "Entrance",
    cells: [[c {...empty_, label: "I-1"}], [empty], [empty]],
    notes: [
      P "Reached by a dark journey down a tunnel of waist-deep water.",
      L [
        "Who has caught swamp fever? What obsession have they developed?",
        "What minor magical item was in the sunken chest you kicked?"
      ]
    ]
  },
  {
    x: 16,
    y: 3,
    cells: [
      [c {...empty_, label: "O", secretDoors: [S], walls: [E]}, c {...empty_, label: "1"}],
      [empty, empty],
      [empty, empty]
    ],
    title: "DEAD END",
    notes: [
      P "(That's odd...) Cut deliberately to II-5. Bole goes deep, then downward. May contain snake w/ unusual venom"
    ]
  },
  {
    x: 17,
    y: 0,
    cells: [
      [
        c {...empty_, label: "~"},
        c {...empty_, label: "2~"},
        c {...empty_, label: "2~"},
        c {...empty_, label: "3~"},
        c {...empty_, label: "3~"},
        c {...empty_, label: "2~"},
        c {...empty_, label: "7~"},
        c {...empty_, label: "2~"}
      ],
      [
        c {...empty_, label: "2", walls: [E]},
        c {...empty_, label: "O", walls: [N, S]},
        c {...empty_, label: "V", walls: [W, E]},
        c {...empty_, label: "O", walls: [N, S]},
        None,
        None,
        c {...empty_, label: "V", walls: [W, E]},
        None,
        None
      ]
    ],
    title: "LURKER TUNNEL",
    notes: [
      P "Hungry giant stinger eel in the water. Small floating islands of grass; may be able to traverse using them. Eel distractible by poultry or fish. Attacks neural impulses. Venom: Causes delirium. Can be harvested"
    ]
  },
  {
    x: 18,
    y: 3,
    cells: [
      [
        None,
        None,
        c {...empty_, label: "O", walls: [N, E, S]},
        c {...empty_, label: "3", walls: [E]},
        c {...empty_, label: "O", walls: [N, S]}
      ],
      [
        None,
        None,
        c {...empty_, walls: [N, W]},
        c {...empty_, walls: [S]},
        c {...empty_, walls: [N, E]}
      ],
      [
        None,
        None,
        c {...empty_, walls: [W, E]},
        c {...empty_, label: "O", walls: [N, W, E]},
        c {...empty_, walls: [W, E]}
      ],
      [
        c {...empty_, walls: [N, W]},
        c {...empty_, walls: [N]},
        c {...empty_, walls: [E]},
        c {...empty_, label: "O", walls: [E]},
        empty,
        c {...empty_, walls: [N]},
        c {...empty_, walls: [N, E]}
      ],
      [
        c {...empty_, walls: [W, E]},
        c {...empty_, label: "O", walls: [N, E, S]},
        c {...empty_, walls: [E]},
        c {...empty_, label: "O", walls: [E, W]},
        c {...empty_, walls: [E]},
        c {...empty_, label: "O", walls: [N, E, S]},
        c {...empty_, walls: [E]}
      ],
      [
        c {...empty_, walls: [S, W]},
        c {...empty_, walls: [S]},
        c {...empty_, walls: [S], secretDoors: [E]},
        c {...empty_, walls: [N], secretDoors: [S]},
        c {...empty_, secretDoors: [W], walls: [S]},
        c {...empty_, walls: [N, S]},
        c {...empty_, walls: [S, E]}
      ],
      [None, None, None, c {...empty_, walls: [S, E, W]}]
    ],
    title: "CORRUPED ROTTER TEMPLE",
    notes: [
      P "Vine ceiling strung with bones; is a giant malefic skeleton plant. Attended by stooped, wheezing rotter priests. Cultivating flesh-eating fungi. They request a meat offering; any blooded creature will do. An offering provides access to the altar: a great cage of bone around an animated bullywug mummy. Is puppeted by a N'Thandar. Is repeating the second verse of the Litany of Moss, so the priests are feeding it endlessly without harvesting. Reading the third verse with a great heart reminds the priests. N'Thandar tries to escape from within altar."
    ]
  },
  {
    x: 26,
    y: 0,
    title: "CORRUPTED LURKER TEMPLE",
    notes: [
      P "Silent. Bloody ruin. Broken spears, shredded nets. Muscular hunter priests mutilated a Ryndyrrax, nowgone. Returning with great spears will begin the hunt. The Ryndyrrax will find party soon, when they wish it wouldn't. Slaying it expels it."
    ],
    cells: [
      [
        make walls::[S, E] (),
        make walls::[S, E] (),
        make walls::[S, E] (),
        make walls::[S, E] (),
        make walls::[S, E] (),
        make ()
      ],
      [
        make label::"4" walls::[S, E] (),
        make walls::[S, E] (),
        make walls::[S, E] (),
        make walls::[S] (),
        make walls::[S] (),
        make label::"A" ()
      ],
      List.append (repeat 5 (make walls::[E] ())) [empty]
    ]
  },
  {
    x: 10,
    y: 0,
    title: "Alleatharel",
    notes: [
      P "Great hollow tree, obvious internal ladder. Ladder goes up and down. Is unreliable and rotted. May break. The lower section is scored with claw marks. Something ignored the ladder and climbed up. It had many limbs. First PC sees ghostly elven faces manifest and cry out. Ancient Elven: 'We are gone from this place. We are sorry. We wait in the Howling Hills.'"
    ],
    cells: [
      [empty, empty, None, None],
      [empty, None, None, None],
      [empty, make walls::[S, E] (), empty, empty],
      [make walls::[E] (), make label::"O" walls::[E, S] (), empty],
      [empty, make label::"5" (), empty],
      [None, make label::"O" ()]
    ]
  },
  {
    x: 0,
    y: 0,
    title: "The Spiral Concourse",
    notes: [
      P "Studded with tremendous femurs inscribed with bullywug pictograms. Each femur is the litany of an aspect of Goualliluk. The corrupted aspects have all but one verse scored out, magical or manual repair is a direct challenge to Tsathoggua. Will incense his corresponding child.",
      P "Stairs down",
      L ["West: II-2", "East: II-1"]
    ],
    cells: [
      List.concat [[empty], repeat 4 (make walls::[S] ()), [empty, empty, make label::"6" ()]],
      List.concat [
        [make walls::[E] ()],
        [empty],
        repeat 2 (make walls::[S] ()),
        [make walls::[E] (), make label::"V" walls::[E] (), make label::"O" ()]
      ],
      [make walls::[E] (), make walls::[E] (), empty, make walls::[E] (), empty],
      [make walls::[E] (), make walls::[E] (), make walls::[S, E] (), make walls::[E] (), empty],
      List.concat [
        [make walls::[E] ()],
        repeat 2 (make walls::[S] ()),
        [make walls::[S, E] (), empty]
      ],
      repeat 5 empty
    ]
  },
  {
    x: 12,
    y: 3,
    title: "Tunnel",
    notes: [P "Lined with an obviously deliberate planting of trees.", P "Pool descends into II-3"],
    cells: [
      [None, None, make label::"7" ()],
      [None, None, empty],
      [None, None, empty],
      [None, None, empty],
      [None, None, make label::"~10" ()],
      [None, None, make label::"V" ()],
      [None, None, make label::"II-3" ()],
      [None, None, make label::"X" (), empty, make label::"X" ()],
      [None, None, empty],
      [None, None, empty],
      [None, make label::"X" (), empty, make label::"X" ()],
      [None, None, empty],
      [make label::"X" (), make label::"X" (), empty, make label::"X" (), make label::"X" ()],
      [make label::"X" (), make label::"X" (), empty, make label::"X" (), make label::"X" ()],
      [make label::"X" (), make label::"X" (), empty, make label::"X" (), make label::"X" ()],
      [None, None, make label::"A" ()],
      [None, None, make label::"B" ()],
      [None, None, make label::"^" ()]
    ]
  },
  {
    x: 14,
    y: 21,
    title: "The Flight",
    notes: [
      P "Scads of forensic evidence. Bullywugs fled en masse. Cut down by claws, poison, localized rot, strangulation by other bullywugs, or nothing apparent. A very careful count shows that some _may_ have escaped."
    ],
    cells:
      List.concat [
        [[make label::"I-8" ()]],
        repeat 6 [empty],
        repeat 2 [make label::"~" ()],
        /* TODO water depth */
        repeat 3 [make label::"~" ()]
      ]
  },
  {
    x: 15,
    y: 16,
    title: "Choked",
    notes: [
      P "The remains of constricted woven thicket. Not more than a month overgrown. Corpse just inside is full of dartflies. They sting. Over time, the infected will turn into an amphibious humanoid (and presumably return to the swamps). They're an ecological weapon of war. Secret Curtain of neglected vines conceals a clutch of eggs. They'll be ready to hatch in a week or so. Uncorrupted."
    ],
    cells: [
      List.append
        (repeat 5 None) [make label::"A" (), None, make label::"B" doors::[S, E] (), empty],
      List.append (repeat 5 None) [empty, None, empty, empty, empty],
      [None, None, None, empty, None, make doors::[S] (), None, empty, make label::"C" (), empty],
      [None, make doors::[S, E] (), make label::"10" (), ...repeat 7 empty],
      [
        None,
        make doors::[S] (),
        make walls::[N] (),
        make walls::[N] (),
        make walls::[N] (),
        make walls::[N] (),
        make walls::[N] (),
        make walls::[N] (),
        make walls::[W] (),
        make walls::[N] ()
      ],
      [
        None,
        make label::"~" (),
        None,
        make doors::[S] walls::[E] (),
        make doors::[N] (),
        make doors::[S] (),
        make walls::[N, E] (),
        make walls::[E] (),
        empty,
        empty
      ],
      [
        make label::"II-5" walls::[E, S, W] (),
        empty,
        None,
        make label::"~" (),
        make label::"~" doors::[E] (),
        make doors::[N, E] (),
        make walls::[S, E] (),
        make walls::[E] (),
        make walls::[S] (),
        empty
      ],
      [make label::"~" (), make label::"9" (), ...repeat 8 empty],
      List.append (repeat 6 None) [make secretDoors::[E] walls::[N] (), empty, empty, empty]
    ]
  }
];