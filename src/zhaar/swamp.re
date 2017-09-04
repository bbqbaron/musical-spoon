open Room;

open Util;

let world = [
  {
    x: 13,
    y: 0,
    cells: [[C {...empty, label: "G"}]],
    title: "The Heart of the Moors",
    notes: [
      P "Wherein the PCs pass from ordinary swamp into the moss-shrouded domain of a lost, near-forgotten plant god"
    ]
  },
  {
    x: 14,
    y: 0,
    title: "Entrance",
    cells: [[C {...empty, label: "I-1"}], [Empty], [Empty]],
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
      [C {...empty, label: "O", secretDoors: [S], walls: [E]}, C {...empty, label: "1"}],
      [Empty, Empty],
      [Empty, Empty]
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
        C {...empty, label: "~"},
        C {...empty, label: "2~"},
        C {...empty, label: "2~"},
        C {...empty, label: "3~"},
        C {...empty, label: "3~"},
        C {...empty, label: "2~"},
        C {...empty, label: "7~"},
        C {...empty, label: "2~"}
      ],
      [
        C {...empty, label: "2", walls: [E]},
        C {...empty, label: "O", walls: [N, S]},
        C {...empty, label: "V", walls: [W, E]},
        C {...empty, label: "O", walls: [N, S]},
        Full,
        Full,
        C {...empty, label: "V", walls: [W, E]},
        Full,
        Full
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
        Full,
        Full,
        C {...empty, label: "O", walls: [N, E, S]},
        C {...empty, label: "3", walls: [E]},
        C {...empty, label: "O", walls: [N, S]}
      ],
      [
        Full,
        Full,
        C {...empty, walls: [N, W]},
        C {...empty, walls: [S]},
        C {...empty, walls: [N, E]}
      ],
      [
        Full,
        Full,
        C {...empty, walls: [W, E]},
        C {...empty, label: "O", walls: [N, W, E]},
        C {...empty, walls: [W, E]}
      ],
      [
        C {...empty, walls: [N, W]},
        C {...empty, walls: [N]},
        C {...empty, walls: [E]},
        C {...empty, label: "O", walls: [E]},
        Empty,
        C {...empty, walls: [N]},
        C {...empty, walls: [N, E]}
      ],
      [
        C {...empty, walls: [W, E]},
        C {...empty, label: "O", walls: [N, E, S]},
        C {...empty, walls: [E]},
        C {...empty, label: "O", walls: [E, W]},
        C {...empty, walls: [E]},
        C {...empty, label: "O", walls: [N, E, S]},
        C {...empty, walls: [E]}
      ],
      [
        C {...empty, walls: [S, W]},
        C {...empty, walls: [S]},
        C {...empty, walls: [S], secretDoors: [E]},
        C {...empty, walls: [N], secretDoors: [S]},
        C {...empty, secretDoors: [W], walls: [S]},
        C {...empty, walls: [N, S]},
        C {...empty, walls: [S, E]}
      ],
      [Full, Full, Full, C {...empty, walls: [S, E, W]}]
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
      List.append (repeat 5 (make walls::[E] ())) [Empty]
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
      [Empty, Empty, Full, Full],
      [Empty, Full, Full, Full],
      [Empty, make walls::[S, E] (), Empty, Empty],
      [make walls::[E] (), make label::"O" walls::[E, S] (), Empty],
      [Empty, make label::"5" (), Empty],
      [Full, make label::"O" ()]
    ]
  },
  {
    x: 0,
    y: 0,
    title: "The Spiral Concourse",
    notes: [
      P "Studded with tremendous femurs inscribed with bullywug pictograms. Each femur is the litany of an aspect of Goualliluk. The corrupted aspects have all but one verse scored out, magical or manual repair is a direct challenge to Tsathoggua. Will incense his corresponding child.",
      P "Stairs down", L [
        "West: II-2", "East: II-1"
      ]
    ],
    cells: [
      List.concat [[Empty], repeat 4 (make walls::[S] ()), [Empty, Empty, make label::"6" ()]],
      List.concat [
        [make walls::[E] ()],
        [Empty],
        repeat 2 (make walls::[S] ()),
        [make walls::[E] (), make label::"V" walls::[E] (), make label::"O" ()]
      ],
      [make walls::[E] (), make walls::[E] (), Empty, make walls::[E] (), Empty],
      [make walls::[E] (), make walls::[E] (), make walls::[S, E] (), make walls::[E] (), Empty],
      List.concat [
        [make walls::[E] ()],
        repeat 2 (make walls::[S] ()),
        [make walls::[S, E] (), Empty]
      ],
      repeat 5 Empty
    ]
  }, {
    x: 14, y:3,title: "Tunnel",notes:[P "Lined with an obviously deliberate planting of trees.", P "Pool descends into II-3"],
    cells: 
    [
      [make label::"7" ()], [Empty],[Empty],[Empty],[make label::"~10" ()], [make label::"V" ()]
    ]
  }
];