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
    y: 20,
    title: "Choked",
    notes: [
      P "The remains of constricted woven thicket. Not more than a month overgrown. Corpse just inside is full of dartflies. They sting. Over time, the infected will turn into an amphibious humanoid (and presumably return to the swamps). They're an ecological weapon of war. Secret Curtain of neglected vines conceals a clutch of eggs. They'll be ready to hatch in a week or so. Uncorrupted."
    ],
    cells: [
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
        make label::"~" doors::[E] walls::[S, W] (),
        make doors::[N, E] (),
        make walls::[S, E] (),
        make walls::[E] (),
        make walls::[S] (),
        empty
      ],
      [make label::"~" (), make label::"9" (), ...repeat 8 empty],
      List.append (repeat 6 None) [make secretDoors::[E] walls::[N] (), empty, empty, empty]
    ]
  },
  {
    x: 15,
    y: 16,
    title: "Banquet Hall",
    notes: [
      P "Tsathoggua 'landed' here",
      P "A: Larder. May contain:",
      L [
        "The crushed shells of vintira gallura, which is supposed to be extinct",
        "A pinch of fire violets, which are potent repellents of any creature that derives power from rage--literally ignites anger pheromones"
      ],
      P "C: Chieftain's corpse at table burst open. His spear, ornate, flies underwater as in air.",
      P "B: Preparation: Discarded bone fetish of Tsathoggua can emit xyphonic waves. Their effects are _very_ unpredictable but may reward player invention. Fetish was used to attract Tsathoggua into chieftain's meal."
    ],
    cells: [
      List.append
        (repeat 5 None) [make label::"A" (), None, make label::"B" doors::[S, E] (), empty],
      List.append (repeat 5 None) [empty, None, empty, empty, empty],
      [None, None, None, empty, None, make doors::[S] (), None, empty, make label::"C" (), empty],
      [None, make doors::[S, E] (), make label::"10" (), ...repeat 7 empty]
    ]
  },
  {
    x: 23,
    y: 24,
    title: "Trapped Echo",
    notes: [
      P "Tsathoggua's entrance created three physical echoes. use slaad stats. Red, blue, green; distributed throughout areas 12 and 13"
    ],
    cells: [
      [make label::"11" doors::[S] ()],
      [make doors::[S] ()],
      [make doors::[S] ()],
      [make doors::[S] ()],
      [make doors::[S] ()],
      [make doors::[S] ()],
      [make doors::[E, W] ()]
    ]
  },
  {
    x: 24,
    y: 27,
    title: "Corrupted Egger Temple",
    notes: [
      P "Stuck in laying mode, bullywug motherbride, immobile, lying among thousands of unfertilized eggs. Must be mated (symbolically :/ ) to another bullywug of any gender (they're hermaphroditic). Rotter priests could work. Commencing the ceremony attracts a Virrukkas, a spirit enraged by interpersonal connection."
    ],
    cells: [
      [None, None, ...repeat 3 empty],
      [None, None, ...repeat 3 empty],
      [None, None, ...repeat 3 empty],
      [empty, empty, make label::"12" doors::[W] (), empty, empty],
      [None, None, ...repeat 3 empty],
      [None, None, ...repeat 3 empty]
    ]
  },
  {
    x: 19,
    y: 26,
    title: "Chieftain's Bedchamber",
    notes: [
      P "No bed, but a rotting nest that would have been replaced by now. Chieftain's enraged spirit sleeps here. Demands and can compel obeisance from hierarchic characters eg druids. He will only depart if the eggs are rescued (he does not know about them) or the temples are cleansed. He rests on a scrap of clothing that belonged to Ephraim, one of the kidnapped children, as well as an amulet belonging to Elgin, which he left there after bringing Tsathoggua here. The chieftain (Oggrush) suspects Elgin."
    ],
    cells: [
      [empty, empty, make doors::[W] ()],
      [empty, make label::"13" walls::[E] (), make doors::[S] ()],
      [None, None, empty],
      [None, None, empty],
      [None, None, empty, make doors::[E] ()]
    ]
  },
  {
    x: 13,
    y: 33,
    title: "Repurposed Tomb",
    notes: [
      P "Four elven statues in corners. For a player with appropriate domain: Who are they? Which one is surprising and why? What _kind_ of elves were they?",
      P "A: Great Toadstool. Obviously more recent than the construction. _May_ be potently hallucinegnic or toxic. _May_ have secondary fungi that enable its cultivation. _May_ host a nest of ether wasps, who unbind matter into subatomic stuff and eat it. There's some type of material they can't unbind. They're very useful components in spells that transmute or dissipate objects.",
      P "Door: Through the hinged skirts of a statue. Is a common elf trick for any PC who might recognize it."
    ],
    cells: [
      [make label::"X" (), make label::"14" (), make label::"X" ()],
      [empty, make label::"A" (), empty],
      [make label::"X" (), empty, make label::"X" secretDoors::[E] ()]
    ]
  },
  {
    x: 16,
    y: 31,
    title: "Sepulchre",
    notes: [
      P "Baron Kin'von'doss, the Moon Drinker, lies in state. He awakens when disturbed. He insists on news of the world, probably finding none of sufficient interest, he orders you out and returns to sleep. He may be induced to offer a tip for services well rendered."
    ],
    cells: [
      [None, ...repeat 3 empty],
      [None, empty, make label::"B" (), empty],
      [None, make label::"15" (), empty, empty],
      [None, empty],
      repeat 2 empty
    ]
  },
  {
    x: 6,
    y: 4,
    title: "Corrupted Eater",
    notes: [
      P "A rapidly thinning megalobullywug has not been fed recently. This is not the corruption; this is neglect. Corruption is not wanting food. A mea of sufficient opulence must be prepared, possibly with the help of area 10."
    ],
    cells: [
      [make label::"II-10" ()],
      repeat 3 empty,
      repeat 4 empty,
      repeat 3 empty,
      [None, empty],
      repeat 3 empty,
      [None, empty],
      [empty, make label::"6" ()],
      repeat 2 empty
    ]
  },
  {
    x: 0,
    y: 7,
    title: "Submerged Gate",
    notes: [
      P "This entire area is completely submerged in an unrecognizable translucent blue fluid. Faintly luminous. Breathable. Ingestion causes psychotic excess of some normal urge or impulse after an hour or so. 'Water' is occupied by floating crystalline pyramids that extrude greenish sludge that petrifies living flesh ('Those aren't statues')",
      P "A: Gate. Leads (visibly, in a swirling pool) to an alien reality. Don't."
    ],
    cells: [
      [None, None, make label::"II-2" ()],
      [empty, make doors::[S] (), make doors::[S] (), make doors::[S] (), empty],
      [None, ...repeat 3 empty],
      [None, ...repeat 3 (make label::"~" ())],
      [None, empty, make label::"A" (), empty]
    ]
  },
  {
    x: 0,
    y: 14,
    title: "Gallery of Memory",
    notes: [
      P "Originally an ancestor museum; now rife with psychic echoes. Anyone moving through the hallway will be harried by psychic demons. Faster travel means more damage.",
      P "A: Ghostly bullywugs run from here forever, only to be cut down. Hallway may be cleansed by a ritual that the players make up. It's the thought that counts."
    ],
    cells: [[make label::"II-3" ()], [empty], [empty], [make label::"A" ()]]
  },
  {
    x: 0,
    y: 37,
    title: "Menagerie",
    notes: [
      P "The weapons brought by Tsathoggua. Being an alien, he doesn't necessarily understand what is or is not lethal. Each weapon occupies a creche made of an odd, extruded translucent material. Some are empty. Remaining:",
      L [
        "Kanarid, mid-transformation. Man-head on fox-body. Its presence causes atavistic homicide and cannibalism. Mostly walks among foxes setting the woods to murderous disorder; occasionally deployed against humans.",
        "Eventrupp. Exists only as a curtain of thought in a passage. Imparts knowledge of a flesh-eating planet that is only a week or so's journey from the surface of the planet. The plant _is_ floating in space out there but I think the idea is for you to asphyxiate while swimming through the air, which of course the Eventrupp's madness allows you to do.",
        "Osybar. Is the missing hoop from a stack of three wooden hoops that appear to ascend in size, with one conspicuous gap. Destroying any hoop destroys the osybar. It is unclear what purpose this creation serves."
      ]
    ],
    cells:
      List.[
        concat [repeat 9 None, [make label::"II-4" ()]],
        concat [repeat 8 None, repeat 3 empty],
        concat [repeat 6 None, repeat 3 empty, [None], repeat 3 empty],
        concat [repeat 4 None, repeat 3 empty, [None, empty, None, empty, None], repeat 3 empty],
        concat [repeat 4 None, concat (repeat 5 [empty, None])],
        concat [[None, ...repeat 4 empty], concat (repeat 4 [None, empty])],
        [
          empty,
          empty,
          None,
          empty,
          None,
          empty,
          make walls::[E] (),
          empty,
          empty,
          None,
          empty,
          make walls::[E] (),
          empty,
          make walls::[E] (),
        ]
      ]
  }
];