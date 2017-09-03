open Room;

open Util;

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
      [C {...empty, label: "1"}, Empty],
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
  },
  {
    title: "",
    x: 22,
    y: 3,
    cells: [[C {...empty, label: "12"}]],
    notes: [
      P "CLOSET",
      P "Portal is in the ceiling. Closes if battery is removed. Alchemical solvents, if recognized, include:",
      L [
        "Strong base that neutralizes capsaicin",
        "Glassifier that renders materials transparent",
        "Lemon-scented cleaner that removes Janitor filth",
        "Golden broom that, when carried, leaves a perfectly metaphysically clean trail wherever the user goes. Cursed. Inhibits the formation of new long-term memories"
      ]
    ]
  },
  {
    title: "FIXME",
    x: 24,
    y: 3,
    cells: [
      [C {...empty, label: "A"}, C {...empty, label: "13"}, C {...empty, label: "|"}],
      [C {...empty, label: "-"}, C {...empty, label: "B"}, C {...empty, label: "-"}],
      [C {...empty, label: "|"}, C {...empty, label: "|"}, C {...empty, label: "-"}]
    ],
    notes: [
      P "SPIRALS",
      P "A: From 10. Staircase laeding forever upward. Never ends",
      P "B: Is a pole climbing 50 feet. While in contact with the pole (there are subtle switches on it) opens a swirling white portal above the climber. The others can jump down into it from higher on the stair. Sliding down the pole will also open the portal, though the pole gets _quite_ hot"
    ]
  },
  {
    title: "FIXME",
    x: 28,
    y: 3,
    cells: [
      [C {...empty, label: "14"}, Empty, Empty],
      [Empty, Empty, C {...empty, label: "A"}],
      [Empty, C {...empty, label: "B"}, Empty]
    ],
    notes: [
      P "OvERLOOK",
      P "No south or east wall. Looks down through a purplish void at he sanctum from afar. It is snowing black feathers from great drifting roc-clouds.",
      P "A: Hidden by overhang, cave containing an umber hulk and a white portal to 10",
      P "B: One of those scenery magnifiers. Takes 1 GP.. Warning label: 'Take care not to crush anything'. Scene viewer shows a battery  on the roof of the sanctum. If a pc is using the viewer, they can reach out and manipulate objects:",
      L [
        "Retrieve the battery",
        "Put objects in 10; even PCs if strong enough",
        "See the glow of the Cheenax",
        "Shrink a roc to sparrow size",
        "Actually crush things. This is ill-advised, unless the PC is skilled and lukcy, one or more areas may be destroyed or rendered unreachable. It's on them."
      ]
    ]
  },
  {
    title: "FIXME",
    x: 22,
    y: 7,
    cells: [
      [C {...empty, label: "15"}, Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty],
      [
        Empty,
        C {...empty, label: "A"},
        Empty,
        C {...empty, label: "B"},
        Empty,
        C {...empty, label: "C"},
        Empty,
        C {...empty, label: "D"},
        Empty
      ],
      repeat 9 Empty
    ],
    notes: [
      P "ENTRY2",
      P "Four slides leave this room",
      L ["A: to 16", "B: to 17", "C: to 18", "D: Boarded up. If PCs pry boards up, to 32"],
      P "A: 'Prison'",
      P "B: 'Vaults (real)'",
      P "C: 'Other'",
      P "D: Scratched out. Investigation reveals 'Stop writing, I'm not dictating right now. Don't _tell_ them that it leads to the chamber of tremendous ...'"
    ]
  },
  {
    title: "FIXME",
    x: 0,
    y: 11,
    cells: [
      List.concat (List.map (fun l => [C {...empty, label: l}, Full]) ["16", "B", "D", "F", "H"]),
      repeat 10 Empty,
      List.concat (
        List.map (fun letter => [Full, C {...empty, label: letter}]) ["A", "C", "E", "G", "I"]
      )
    ],
    notes: [
      P "PRISON",
      P "A: Blue Zhaar. Swears that he's the original, sane Zhaar. If pressed, it's because he's the 'only one who wears a primary color'. If released, he will:",
      L [
        "Cast a blue death ray at a PC wearing a secondary color",
        "Vanish, leaving his empty robes. The robes are infested with Vinkellian Cerebral Worms.",
        "He is now a wandering Zhaar. He appears to provoke/frame the PCs to get another Zhaar to appear."
      ],
      P "B: A second Blue Zhaar. Just an erinyes with a sense of humor. Offers a potion of heroism for her release.",
      P "C: Khandura, enraged bariaur",
      P "D: Skandus, a marraenoloth (hint)",
      P "E: Empty",
      P "F: 'Empty'. A Far Realm beast who communicates only in images named (picture of scrimshaw pig), waiting invisibly for Zhaar. If cell is opened, attempts to infest a character. Infested character _will_ jump into 15-D, and advocate tearing up the boards if you can subtly inform them.",
      P "G: Empty",
      P "H: A displacer beast wearing a blue collar. Reads 'R'shan' in some rough equivalent to Arabic",
      P "I: Any PC kidnapped"
    ]
  },
  {
    title: "FIXME",
    x: 12,
    y: 10,
    cells: [
      [C {...empty, label: "17"}, Empty, Empty, Empty, Empty],
      [Empty, Full, C {...empty, label: "B"}, Full, Empty],
      [Empty, C {...empty, label: "E"}, C {...empty, label: "A"}, C {...empty, label: "C"}, Empty],
      [Empty, Full, C {...empty, label: "D"}, Full, Empty],
      repeat 5 Empty
    ],
    notes: [
      P "VAULTS",
      P "A: From 15-B",
      P "Doors",
      L [
        "N: Spun safe handle. Unlocked",
        "E: Combination lock. Wheel style. 1-2-3-4-5",
        "S: Padlock",
        "W: Featureless. Opened from 14?"
      ],
      P "B: Contains only a stone dragon head that breathes acid bees.",
      P "C: Maybe:",
      L [
        "A magic first aid kit",
        "A sword with a grooved blade and a poison reservoir in the handle.",
        "A frozen fireball that explodes when melted."
      ],
      P "D: Full of unbreakable padlocks with keys...if you can match them",
      P "E: Maybe:",
      L [
        "Ashtongue, a kris that dehydrates",
        "A gnomish sewing machine that can process platinum thread",
        "3500 GP in bars"
      ]
    ]
  },
  {
    title: "FIXME",
    x: 18,
    y: 11,
    cells: [
      List.append
        (List.map (fun l => C {...empty, label: l}) ["18", "B", "D", "F", "H"])
        [C {...empty, label: "J", doors: [W]}],
      [C {...empty, label: "A"}],
      [C {...empty, label: "C"}],
      [C {...empty, label: "E"}],
      [C {...empty, label: "G", doors: [S]}],
      [C {...empty, label: "I"}]
    ],
    notes: [
      P "SYMPATHY HALL",
      P "Doors:",
      L ["E: Opens only after B, D, F, H are lit", "S: Opens when east door opens."],
      P "A: lever. When thrown, gives strength to anyone on B",
      P "B: Hammer test, like at a fair. Lights up on a WOW!",
      P "C: Lever. Grants health (all grants last for a month) to D",
      P "D: Button. Holding it down fills a meter while causing the holder great pain; they may pass out.",
      P "E: Lever. Grants speed to F",
      P "F: Robot sensei holding a coin. Taking it quickly causes the sensei to bow.",
      P "G: Lever. Grants knowledge (and maybe a little personality) to H",
      P "H: Quiz time! Ask the players to craft an interesting quiz about their professions. The last question must fuse the expertise of the players who exchanged knowledge",
      P "I: Leads to J"
    ]
  },
  {
    title: "FIXME",
    x: 17,
    y: 17,
    cells: [[C {...empty, doors: [W]}, Empty, C {...empty, doors: [N]}]],
    notes: []
  },
  {
    title: "FIXME",
    x: 24,
    y: 11,
    cells: [
      [C {...empty, label: "19"}, ...repeat 6 Empty],
      [Empty, ...List.concat (repeat 6 [Full, Empty])],
      repeat 7 Empty,
      [Empty, ...List.concat (repeat 6 [Full, Empty])],
      repeat 7 Empty,
      [Empty, ...List.concat (repeat 6 [Full, Empty])],
      [Empty, Empty, Empty, Empty, Empty, Empty, C {...empty, doors: [S]}]
    ],
    notes: [
      P "STALKER",
      P "Doors",
      L ["W: Unlocked", "S: Locked with a simple key lock."],
      P "This room contains an astral stalker paid by Zhaar to kill anything that enters. It throws darts that cause supernatural cold, can use dimension door, and is quite intelligent. It has one magic item, maybe:",
      L [
        "A breastplate that reflects light, lightning, or generic magic rays",
        "A pouch w/ 3 uses of sleep dust",
        "A timewinder, 2 charges, that moves it 15 seconds into the past"
      ]
    ]
  },
  {
    title: "FIXME",
    x: 19,
    y: 12,
    cells: [[C {...empty, label: "20", walls: [W, N]}]],
    notes: [
      P "VIA NIGRA",
      P "Pitch blank, silenced, unlightable hallway",
      P "Doors",
      L [
        "E: Secret from other side",
        "S: Opens easily, roll for every square to make them nervous. On a very low, the tiles they're on all teleport to random locations in the hallway"
      ]
    ]
  },
  {
    title: "FIXME",
    x: 20,
    y: 13,
    cells: [
      [C {...empty, label: "21", walls: [E]}, Empty, Empty],
      [C {...empty, walls: [E]}, C {...empty, walls: [E]}, Empty],
      [C {...empty, walls: [E]}, C {...empty, walls: [E]}, Empty],
      [C {...empty, walls: [E]}, C {...empty, walls: [E]}, Empty],
      [C {...empty, walls: [E]}, C {...empty, walls: [E]}, Empty],
      [C {...empty, walls: [E]}, C {...empty, walls: [E]}, Empty],
      [Empty, C {...empty, walls: [E]}, Empty]
    ],
    notes: [
      P "GALLERY",
      P "Contains paintings. Maybe: ",
      L [
        "A dog walking a dog",
        "A dog tearing out the throat of a unicorn",
        "A great sphinx next to a tiny barely-lit hamlet",
        "A very detailed study of a foot",
        "A man with tongues for eyes andeye for a tongue. He is labeled 'Uncle'"
      ],
      P "Doors",
      L [
        "N: Locked hard, but not too hard",
        "W: Unlocked. If blue zhaar is free, he'll probably show here with a very angry undead unocorn."
      ],
      P "Definitely contains a painting of a man lying dead in front of a chest. The chest is real, and trapped with a cloudkill. If it goes off, the man will rise coughing, and complain that he tried to warn them, then collapse again. The chest contains a wand of cloudkill (the trap) as well as maybe:",
      L [
        "A dagger that causes horrific wounds with psychic backlash on the wielder.",
        "A chain shirt of great strength that squeals when you move."
      ]
    ]
  },
  {
    title: "FIXME",
    x: 23,
    y: 18,
    cells: [
      List.concat [repeat 7 Full, [C {...empty, doors: [N], secretDoors: [W]}]],
      [C {...empty, label: "22"}, ...repeat 7 Empty],
      [Empty, ...List.concat (repeat 6 [Full, Empty])],
      [
        C {...empty, doors: [W]},
        Empty,
        C {...empty, doors: [S]},
        Empty,
        Empty,
        C {...empty, doors: [S]},
        Empty
      ]
    ],
    notes: [
      P "INTERSTICES",
      P "Three great black columns.",
      P "Doors",
      L [
        "SECRET: Is secret.",
        "SE: Labeled 'Don't'",
        "SW: Labeled 'Just kidding. Really, though, don't.",
        "W: Locked",
        "TODO: Need keys to find"
      ]
    ]
  },
  {
    title: "FIXME",
    x: 27,
    y: 22,
    cells: [
      [C {...empty, label: "23", walls: [W, N]}, Empty, C {...empty, walls: [N]}],
      repeat 3 Empty,
      [C {...empty, label: "A", walls: [S]}, C {...empty, walls: [S]}, C {...empty, walls: [S]}]
    ],
    notes: [
      P "SILVER CHAMBER",
      P "Reflective walls. A lurker demon called Sunlight-on-Water. Lives in reflection. Breaking mirror turns him into a million tiny replicas. Eats beauty. Will accept _very_ nice tribute.",
      P "A: Dull leaden chest. Contains maybe:",
      L [
        "A Tyrrhenian purple silk robe that allows one to teleport between golden objects",
        "A rusted axe called Tarnbiter that sunders earth",
        "Object d'arte"
      ]
    ]
  },
  {
    title: "FIXME",
    x: 24,
    y: 22,
    cells: [
      [C {...empty, label: "24", walls: [W, N]}, Empty, C {...empty, walls: [E, N]}],
      [C {...empty, walls: [W]}, Empty, C {...empty, walls: [E]}],
      [
        C {...empty, walls: [W, S]},
        C {...empty, label: "A", walls: [S]},
        C {...empty, walls: [S, E]}
      ]
    ],
    notes: [
      P "GOLD CHAMBER",
      P "A roaring, frothing gladiator devil called a Trithuga, named the Marshal of Storms, wields trident and net. Challenges the most formidable-looking character to single combat. If defeated honorably, stands down and offers the contents of A. If dogpiled or killed via treachery, explodes in a shower of acid.",
      P "A: An unlocked platinum chest. Contains:",
      L [
        "If marshal defeated: a gilded titanium shield whose crest gradually takes on the bearer's deeds, until they can do nothing bu stare at it, reliving old triumphs. If marshal betrayed, contains a quiver of obsidian arrows. The first arrow-using enemy you encounter suddenly possesses them al. They turn to reddish yew and fly truest into your own heart."
      ]
    ]
  },
  {
    title: "DOORS",
    x: 21,
    y: 21,
    cells: [
      [Full, C {...empty, label: "25"}],
      [C {...empty, doors: [S]}, C {...empty, doors: [E]}, C {...empty, doors: [S], walls: [N]}],
      [C {...empty, doors: [E]}, C {...empty, doors: [E]}, C {...empty, doors: [S]}],
      [C {...empty, doors: [E]}, C {...empty, doors: [N]}, C {...empty, doors: [N]}],
      [
        Full,
        C {...empty, doors: [N]},
        C {...empty, doors: [N]},
        Empty,
        C {...empty, label: "A"},
        Empty,
        C {...empty, label: "B"},
        Empty,
        Empty
      ]
    ],
    notes: [
      P "Each door is expertly locked. Keys can be obtained from various treasures if the party does not have an expert locksmith. Two locks are skill-locks requiring speed and prescience. One merely has a handle ten feet up. One;s handle is ethereal (FWIW, Kulichi is from the Border Ethereal).",
      P "A: A murder hole allowing easy access to 24-A, which contains the Omnibus of Misdeeds, a record of the great atrocities. Can be consulted for details on anatomy, terrorism, viropathology, ghoul-summoning, and clairvoyance.",
      P "B: A murder hole to 23-A"
    ]
  },
  {
    title: "FIXME",
    x: 14,
    y: 16,
    cells: [
      [C {...empty, label: "26"}, Empty, Empty],
      [C {...empty, doors: [W]}, Empty, C {...empty, doors: [E]}],
      [Empty, Empty, Empty]
    ],
    notes: [
      P "GARDEN",
      P "A perfectly idyllic place with nothing wrong or dangerous. A tree in the center bears rainbow fruit -- it always has exactly one of each color--that has no magical effects whatsoever.",
      P "Doors:",
      L [
        "E: Open",
        "N: Stuck closed, very elaborate",
        "W: Brass knocker in a catoblepas mouth. Knocking causes it to gaze rheumy death. A character so killed may pass through the now-insubstantial door.",
        "S: Unlocked"
      ]
    ]
  },
  {
    title: "FIXME",
    x: 15,
    y: 15,
    cells: [[C {...empty, label: "27", doors: [S], walls: [N]}]],
    notes: [
      P "KRYNNSPACE",
      P "Opens above the stratosphere of Krynn. The effects are what you imagine. If the players survive, \nrun DLI-12 for them"
    ]
  },
  {
    title: "FIXME",
    x: 10,
    y: 15,
    cells: [
      [C {...empty, label: "28"}, Empty, C {...empty, walls: [N]}, C {...empty, walls: [N]}],
      List.concat [repeat 3 Empty, [C {...empty, walls: [E]}]],
      [Empty, Empty, Empty, C {...empty, doors: [E]}],
      List.concat [repeat 3 Empty, [C {...empty, walls: [E]}]]
    ],
    notes: [
      P "ROMPER ROOM",
      P "Zhaar blows off steam here. Foam wrapped weapons. If you lift one, lights descend and a crowd murmurs. Victory in the ensuing duel brings the winner a hail of 500 razor-sharp gold pieces (Zhaar never wins). The GP counts as litter. However! A character killed by the catoblepas lock in 26 will attract the attention of veteran corner man Elim Coolara, now a minor devil. Elim will, in exchange for the opportunity to follow the party around, appear twice to talk a character out of a tough spot. He will use onecharge to restore the dead PC."
    ]
  },
  {
    title: "FIXME",
    x: 14,
    y: 19,
    cells: [
      [C {...empty, doors: [N], label: "x"}],
      List.concat [
        repeat 2 (C {...empty, label: "x"}),
        [C {...empty, label: "29"}],
        repeat 2 Empty
      ],
      [Empty, ...repeat 4 (C {...empty, label: "x"})],
      List.concat [repeat 3 Full, [Empty, C {...empty, label: "x"}]],
      [Full, Empty, ...repeat 3 (C {...empty, label: "x"})],
      List.concat [[Full], repeat 2 (C {...empty, label: "x"}), repeat 2 Empty],
      [Full, ...repeat 4 (C {...empty, label: "x"})],
      [Full, ...repeat 4 (C {...empty, label: "x"})],
      [Full, ...repeat 4 (C {...empty, label: "x"})],
      [
        Full,
        C {...empty, walls: [S]},
        C {...empty, doors: [S]},
        C {...empty, doors: [S]},
        C {...empty, walls: [S]}
      ]
    ],
    notes: [
      P "LETHE",
      P "The river Lethe flows through this room under a low ceiling of Stygian boughs. It does what you think. Worse, \nthe trees are full of Barlgura, \nand one Akilith.",
      P "Doors",
      L ["S: Unlocked"]
    ]
  },
  {
    title: "FIXME",
    x: 14,
    y: 29,
    cells: [
      [C {...empty, label: "30"}, ...repeat 5 Empty],
      [
        C {...empty, secretDoors: [W]},
        C {...empty, label: "A"},
        C {...empty, label: "C"},
        C {...empty, label: "E"},
        C {...empty, label: "G"},
        Empty
      ],
      [
        Empty,
        C {...empty, label: "B"},
        C {...empty, label: "D"},
        C {...empty, label: "F"},
        C {...empty, label: "H"},
        Empty
      ]
    ],
    notes: [
      P "TREASURE",
      P "A chamber drowning in gold.",
      P "A: Literally full of solid gold.",
      P "B: Sixteen sets of black silk PJs",
      P "C: A nightcap that fends off hags.",
      P "D: Zhaar's teddy bear. 3/day turns into a velour golem.",
      P "E: Troianus, \nan ancient man lying fetal in the chest. He rises--slowly, \ncreakily. If helped up, \nwill be very talkative and helpful.",
      P "F: All maggots, \nexcept the black leather deathtouch armor at the bottom",
      P "G: The complete text of the Epic of Kylantes. If all directions in the Epic are followed, \nthey lead to the ruins of the Temple of Amaunator.",
      P "H: Not a chest, \nbut a dial with eight positions. The dial position determines where  the western secret door leads.",
      P "Doors",
      P "W: Secret. Leads to:",
      L [
        "The second spire of the General of Gehenna's Trident Fortress.",
        "The midst of the perpetual revolution in Ruckus, \non one of the quieter layers of Pandemonium.",
        "The sanctum of Raahz, \nZhaar's splinter personality.",
        "The city of Brass",
        "The body of Alaronfalel, \nelven goddess of Beauty before Sehanine Moonbow, \nslain by Maglubiyet, \nfloating in the Astral",
        "A dream that Rary is currently having",
        "The city of Kytons",
        "Wherever your campaign need to go next"
      ]
    ]
  },
  {
    title: "FIXME",
    x: 16,
    y: 0,
    cells: [[C {...empty, label: "32"}, Empty, Empty, Empty, Empty], repeat 5 Empty],
    notes: []
  }
];