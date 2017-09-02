open Room;

let empty = {doors: [], label: "", secretDoors: [], walls: []};

let world = [
  {
    x: 0,
    y: 0,
    title: "Notes",
    notes: [
      P "Wandering Zhaars",
      P "Only wandering things are facets of Zhaar.",
      P "Orange: The Janitor. If the party leaves anything lying around, he may:",
      L [
        "Geas a party member to clean _any_ detritus they see",
        "Drench a party member in supernatural filth that makes stealth, concentration, or footing worse",
        "Grant them a magical quarterbroom that gets bonuses to trip attacks"
      ],
      P "Green: The Warden. If the party engages in any particularly silly behavior, he may:",
      L ["Cast Tasha's Uncontrollable Hideous Laughter, AOE, 10-turn duration"],
      P "Purple: The Inquisitor. If a party member displays deep knowledge, he may:",
      L ["Spirit them away to area 6 for a nice chat", "Spirit them away to 16-I for a nice chat"],
      P "CLUES AND KEYS",
      P "The following can be found anywhere, depending on the party's needs. They don't need to find everything, but I like to reward inventive or curious play.",
      L [
        "A recipe for impossibly spicy cucumber sandwiches",
        "A receipt for a boat trip across the Styx, signed by Zhaar and Skandus from 16-D. Has been stamped VOID. Skandus probably betrayed Zhaar?",
        "Key to 17-C.",
        "Combination to 17-B",
        "A key to 19-South",
        "Keys to various doors in 25"
      ]
    ],
    cells: [[C {...empty, label: "G"}]]
  },
  {
    x: 0,
    y: 3,
    cells: [[C {...empty, label: "0", doors: [E]}]],
    title: "OUTSIDE",
    notes: [
      P "OUTSIDE",
      L [
        "Why are you here?",
        "What's one rumor you've heard about Zhaar?",
        "Clean flagstone",
        "Bronze doors",
        "Gaslight",
        "Salty fresh air",
        "Humming noise like machines",
        "Walls festooned with writing in random languages (write clues)"
      ]
    ]
  },
  {
    x: 1,
    y: 2,
    cells: [
      [C {...empty, label: "1"}, Full],
      [Empty, C {...empty, doors: [E], label: "A"}],
      [Empty, Empty]
    ],
    title: "ENTRY",
    notes: [
      L ["Doors: Unlocked"],
      P "A: Stone giff head. How did you learn the password, and what is it?",
      P "Head might:",
      L ["Breathe fire", "Dispense candy", "Demand candy", "Bid you welcome"],
      P "Head will:",
      L ["Admonish you to clean up after yourselves and open impossibly wide, becoming East door"]
    ]
  },
  {
    x: 3,
    y: 2,
    cells: [
      [Full, C {...empty, label: "2"}, Empty],
      [C {...empty, doors: [W]}, Empty, C {...empty, label: "B"}],
      [Full, C {...empty, label: "A"}, Empty]
    ],
    title: "WAITING ROOM",
    notes: [
      P "A: Azchanda, a prosperous Arcane, waiting. Divination specialist. Curt, polite, supercilious.",
      P "B: Unmoving butler statue",
      P "Doors",
      L ["E: Unlocked"]
    ]
  },
  {
    x: 10,
    y: 4,
    cells: [[C {...empty, label: "3", doors: [W, E]}]],
    title: "DECON",
    notes: [
      P "Airlock sprays the party with prismatic rays. Zhaar despises halflings, war gods, mining tools, and bards. These prohibitions are clearly posted...in Elvish"
    ]
  },
  {
    x: 7,
    y: 5,
    cells: [[C {...empty, label: "4", doors: [N]}]],
    title: "UNFINISHED",
    notes: [
      P "This door opens into Limbo. The environment on the other side may be:",
      L [
        "A roiling upside-down flamescape",
        "The parapet of a githzerai castle",
        "The belly of a transitory chaos behemoth"
      ]
    ]
  },
  {
    title: "FIXME",
    x: 6,
    y: 1,
    cells: [
      [Full, Full, Full, Full, C {...empty, label: "5"}, C {...empty, label: "D"}],
      [Full, Empty, Empty, Empty, Empty, C {...empty, doors: [E]}],
      [
        C {...empty, doors: [W]},
        Empty,
        Full,
        Full,
        C {...empty, walls: [S]},
        C {...empty, label: "E", walls: [S]}
      ],
      [Full, C {...empty, doors: [S]}, Empty, Empty, C {...empty, doors: [E]}]
    ],
    notes: [
      P "VISITORS",
      P "D: Dead drow war party. Killed by silver arrows",
      P "E: Dead derro war party. Killed by mithril axes. Not killed at same time",
      P "Doors:",
      P "E: One white one black. Locked. Drow have key, as well as a scroll of Evard's Black Tentacles, 15 spider venom darts, one adamantine sword (broken). If door is opened, party meets their hostile opposites: elf <-> drow, dwarf <-> duergar, warrior <-> wizard. Swap alignments, deities. druid <-> artificer"
    ]
  },
  {
    title: "FIXME",
    x: 12,
    y: 1,
    cells: [
      [Full, C {...empty, label: "6"}, C {...empty, doors: [N], label: "B"}],
      [C {...empty, doors: [W]}, Empty, Empty],
      [Full, C {...empty, walls: [S]}, C {...empty, walls: [S]}]
    ],
    notes: [
      P "SITTING ROOM",
      P "Perfectly pleasant, bright light. Cucumber sandwiches (endless), early grey (10 GP per cup, served by a xill in a tuxedo). Cucumber  sandwiches are _impossibly_ spicy. Stages of poison are",
      L [
        "Debilitating pain. Damage for 5 turns, total distraction",
        "Dehydration as _every_ bodily fluid flees. Con damage",
        "Intestinal pain.",
        "You don't want to know where this usually ends. Earl grey removes the burning if applied within 30 seconds. The xill charges 100 GP"
      ],
      P "The xill's name is Kulichi",
      P "B: Kulichi's pantry. Two live humanoids (Elam the Fieldhand, sandy and boyish) (Rikker the Albadian Sorceress, delirious and deadly). If left alone they will be hatched. Kulichi will not part with them. He claims that Zhaar manufactured them and they have no home to return to."
    ]
  },
  {
    title: "FIXME",
    x: 12,
    y: 3,
    cells: [[C {...empty, label: "7", walls: [W, E, N, S]}]],
    notes: [
      P "CHEENAX: A creation of Zhaar. The cheenax powers the cucumber sandwich generator in 6, the decon in 3, and the portal to 10-e. It creates an aura of hunger as it saps mortal life force. Double food ticks w/in 3 squares. Emanates necromancy."
    ]
  },
  {
    title: "FIXME",
    x: 11,
    y: 4,
    cells: [
      [C {...empty, doors: [W]}, Empty, Empty, Empty],
      [Full, Full, Full, Empty],
      [Full, Empty, Empty, Empty]
    ],
    notes: []
  },
  {
    title: "FIXME",
    x: 15,
    y: 6,
    cells: [[C {...empty, label: "8"}, Empty, Empty]],
    notes: [
      P "THE PHANOPLIAN GATES",
      P "Four portcullises in succession",
      L [
        "Red Bars: Demands blood",
        "Yellow bars: Demands coin",
        "Blue Bars: Demands knowledge",
        "Green bars: Demands cucumber sandwich. Kulichi will _not_ provide sandwiches in order to open the door; he will be suspicious of attempts to remove sandwiches from area 6"
      ],
      P "1 can be satisfied by blood from drow, duplicates, prisoners, but not phantoms. 3 can be satisfied by the scroll from 5"
    ]
  },
  {
    title: "FIXME",
    x: 0,
    y: 6,
    cells: [
      [
        Empty,
        Empty,
        C {...empty, walls: [W]},
        Empty,
        C {...empty, walls: [W]},
        Empty,
        Empty,
        Full,
        Empty,
        Empty,
        Empty,
        Full,
        Empty
      ],
      [
        Empty,
        C {...empty, walls: [W]},
        C {...empty, walls: [W]},
        C {...empty, walls: [W]},
        Empty,
        Full,
        Empty,
        Full,
        Empty,
        Full,
        Empty,
        Full,
        C {...empty, label: "9"}
      ],
      [
        Empty,
        C {...empty, walls: [W, S]},
        C {...empty, label: "B", walls: [S]},
        C {...empty, label: "C", walls: [S, W]},
        C {...empty, walls: [S]},
        Full,
        C {...empty, label: "D", walls: [S]},
        C {...empty, walls: [S]},
        C {...empty, label: "E", walls: [S]},
        Full,
        C {...empty, label: "F", walls: [S]},
        C {...empty, label: "H", walls: [S]},
        C {...empty, walls: [S]}
      ],
      [
        C {...empty, label: "A", secretDoors: [E]},
        Empty,
        Empty,
        Empty,
        Empty,
        Empty,
        Empty,
        Empty,
        Empty,
        Empty,
        Empty,
        Empty,
        C {...empty, label: "G", walls: [S]}
      ]
    ],
    notes: [
      P "THE GAUNTLET",
      P "30 seconds after anything presses on the floor at H, the hidden portcullis east of it comes down violently (damages a PC who fails to rush under",
      P "F: Labeled \"Vaults\" with an arrow pointing north.",
      P "B,C,D,E: Floor drops away when approached. E has a label reading 'Get it?'",
      P "A: A porphyrystatue of a bull with lapiz lazuli eyes. 500 pounds. Facing the East secret door. If mounted, charges while trying to throw its rider. Crashes through secret door and explodes against G. Porphyry shards cause bleeding. Its silvery horns can be a magic spearhead of a magic drinking horn. Its nosering is stuck in the nose. If extracted, it can be a protective bracelet. Its eyes are each worth 100 GP. Entering the secret door may trigger a charge if done carelessly (ie it's a trap)"
    ]
  },
  {
    title: "FIXME",
    x: 18,
    y: 3,
    cells: [
      [C {...empty, label: "A"}, Empty, C {...empty, label: "B"}],
      [Empty, C {...empty, label: "10"}, Empty],
      [C {...empty, label: "C"}, Empty, C {...empty, label: "D"}],
      [Empty, Empty, Empty],
      [Full, C {...empty, label: "E", secretDoors: [N]}, Full]
    ],
    notes: [
      P "COURTYARD",
      P "Open to a bruise-colored alien sky",
      P "Movement attracts Byakhee, who eats memories.",
      P "A: swirling white portal to 11",
      P "B: swirling white portal to 12",
      P "C: ...to 13",
      P "D: ...to 14",
      P "E: still white portal. has two recesses next to it that accept hexagonal power cells. If activated with one, begins to swirl fitfully; may lead to 15 or a cabin in Dis on Baator. If activated with two, leads to 15."
    ]
  },
  {
    title: "SWITCHES",
    x: 22,
    y: 0,
    cells: [
      [
        C {...empty, label: "11"},
        C {...empty, label: "A", walls: [E, S]},
        Empty,
        C {...empty, label: "X"},
        Empty,
        C {...empty, label: "X"},
        Empty,
        C {...empty, label: "X"},
        Empty,
        C {...empty, label: "X"}
      ],
      [Empty, Empty, Empty, Full, Full, Full, Full, Full, Full, C {...empty, label: "B"}]
    ],
    notes: [
      P "The Xes are actually drawn on the floor!",
      L [
        "Summons an angry bombardier beetle when stepped on",
        "Summons a buoyant mushroom balloon",
        "Opens B to 10, even if the battery is removed. Portal closes 5 seconds after switch is released.",
        "Raises floor of 3 suddenly and violently into the ceiling"
      ],
      P "A: from 10",
      P "B: Swirling white portal. Has a battery"
    ]
  }
];