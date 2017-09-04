open Room;

open Util;

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
    cells: [[c {...empty_, label: "G"}]]
  },
  {
    x: 0,
    y: 3,
    cells: [[c {...empty_, label: "0", doors: [E]}]],
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
      [c {...empty_, label: "1"}, empty],
      [empty, c {...empty_, doors: [E], label: "A"}],
      [empty, empty]
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
      [None, c {...empty_, label: "2"}, empty],
      [empty, empty, c {...empty_, label: "B"}],
      [None, c {...empty_, label: "A"}, empty]
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
    cells: [[c {...empty_, label: "3", doors: [W]}]],
    title: "DECON",
    notes: [
      P "Airlock sprays the party with prismatic rays. Zhaar despises halflings, war gods, mining tools, and bards. These prohibitions are clearly posted...in Elvish"
    ]
  },
  {
    x: 7,
    y: 5,
    cells: [[c {...empty_, label: "4"}]],
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
      [None, None, None, None, c {...empty_, label: "5"}, c {...empty_, label: "D"}],
      [None, empty, empty, empty, empty, empty],
      [
        c {...empty_, doors: [W]},
        empty,
        None,
        None,
        c {...empty_, walls: [S]},
        c {...empty_, label: "E", walls: [S]}
      ],
      [None, c {...empty_, doors: [S]}, empty, empty]
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
      [None, c {...empty_, label: "6"}, c {...empty_, doors: [N], label: "B"}],
      [c {...empty_, doors: [W]}, empty, empty],
      [None, c {...empty_, walls: [S]}, c {...empty_, walls: [S]}]
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
    cells: [[c {...empty_, label: "7", walls: [W, E, N, S]}]],
    notes: [
      P "CHEENAX: A creation of Zhaar. The cheenax powers the cucumber sandwich generator in 6, the decon in 3, and the portal to 10-e. It creates an aura of hunger as it saps mortal life force. Double food ticks w/in 3 squares. Emanates necromancy."
    ]
  },
  {
    title: "FIXME",
    x: 11,
    y: 4,
    cells: [
      [c {...empty_, doors: [W]}, empty, empty, empty],
      [None, None, None, empty],
      [None, empty, empty, empty]
    ],
    notes: []
  },
  {
    title: "FIXME",
    x: 15,
    y: 6,
    cells: [[c {...empty_, label: "8"}, empty, empty]],
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
        empty,
        empty,
        c {...empty_, walls: [W]},
        empty,
        c {...empty_, walls: [W]},
        empty,
        empty,
        None,
        empty,
        empty,
        empty
      ],
      [
        empty,
        c {...empty_, walls: [W]},
        c {...empty_, walls: [W]},
        c {...empty_, walls: [W]},
        empty,
        None,
        empty,
        None,
        empty,
        None,
        empty,
        None,
        c {...empty_, label: "9"}
      ],
      [
        empty,
        c {...empty_, walls: [W, S]},
        c {...empty_, label: "B", walls: [S]},
        c {...empty_, label: "C", walls: [S, W]},
        c {...empty_, walls: [S]},
        None,
        c {...empty_, label: "D", walls: [S]},
        c {...empty_, walls: [S]},
        c {...empty_, label: "E", walls: [S]},
        None,
        c {...empty_, label: "F", walls: [S]},
        c {...empty_, label: "H", walls: [S]},
        c {...empty_, walls: [S]}
      ],
      [
        c {...empty_, label: "A", secretDoors: [E]},
        empty,
        empty,
        empty,
        empty,
        empty,
        empty,
        empty,
        empty,
        empty,
        empty,
        empty,
        c {...empty_, label: "G", walls: [S]}
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
      [c {...empty_, label: "A"}, empty, c {...empty_, label: "B"}],
      [empty, c {...empty_, label: "10"}, empty],
      [c {...empty_, label: "C"}, empty, c {...empty_, label: "D"}],
      [empty, empty, empty],
      [None, c {...empty_, label: "E", secretDoors: [N]}, None]
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
        c {...empty_, label: "11"},
        c {...empty_, label: "A", walls: [E, S]},
        empty,
        c {...empty_, label: "X"},
        empty,
        c {...empty_, label: "X"},
        empty,
        c {...empty_, label: "X"},
        empty,
        c {...empty_, label: "X"}
      ],
      [empty, empty, empty, None, None, None, None, None, None, c {...empty_, label: "B"}]
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
    cells: [[c {...empty_, label: "12"}]],
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
      [c {...empty_, label: "A"}, c {...empty_, label: "13"}, c {...empty_, label: "|"}],
      [c {...empty_, label: "-"}, c {...empty_, label: "B"}, c {...empty_, label: "-"}],
      [c {...empty_, label: "|"}, c {...empty_, label: "|"}, c {...empty_, label: "-"}]
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
      [c {...empty_, label: "14"}, empty, empty],
      [empty, empty, c {...empty_, label: "A"}],
      [empty, c {...empty_, label: "B"}, empty]
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
      [c {...empty_, label: "15"}, empty, empty, empty, empty, empty, empty, empty, empty],
      [
        empty,
        c {...empty_, label: "A"},
        empty,
        c {...empty_, label: "B"},
        empty,
        c {...empty_, label: "C"},
        empty,
        c {...empty_, label: "D"},
        empty
      ],
      repeat 9 empty
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
      List.concat (List.map (fun l => [c {...empty_, label: l}, None]) ["16", "B", "D", "F", "H"]),
      repeat 10 empty,
      List.concat (
        List.map (fun letter => [None, c {...empty_, label: letter}]) ["A", "C", "E", "G", "I"]
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
      P "E: empty",
      P "F: 'empty'. A Far Realm beast who communicates only in images named (picture of scrimshaw pig), waiting invisibly for Zhaar. If cell is opened, attempts to infest a character. Infested character _will_ jump into 15-D, and advocate tearing up the boards if you can subtly inform them.",
      P "G: empty",
      P "H: A displacer beast wearing a blue collar. Reads 'R'shan' in some rough equivalent to Arabic",
      P "I: Any PC kidnapped"
    ]
  },
  {
    title: "FIXME",
    x: 12,
    y: 10,
    cells: [
      [c {...empty_, label: "17"}, empty, empty, empty, empty],
      [empty, None, c {...empty_, label: "B"}, None, empty],
      [
        empty,
        c {...empty_, label: "E"},
        c {...empty_, label: "A"},
        c {...empty_, label: "C"},
        empty
      ],
      [empty, None, c {...empty_, label: "D"}, None, empty],
      repeat 5 empty
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
      P "D: None of unbreakable padlocks with keys...if you can match them",
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
        (List.map (fun l => c {...empty_, label: l}) ["18", "B", "D", "F", "H"])
        [c {...empty_, label: "J", doors: [W]}],
      [c {...empty_, label: "A"}],
      [c {...empty_, label: "C"}],
      [c {...empty_, label: "E"}],
      [c {...empty_, label: "G", doors: [S]}],
      [c {...empty_, label: "I"}]
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
    cells: [[c {...empty_, doors: [W]}, empty, c {...empty_, doors: [N]}]],
    notes: []
  },
  {
    title: "FIXME",
    x: 24,
    y: 11,
    cells: [
      [c {...empty_, label: "19"}, ...repeat 6 empty],
      [empty, ...List.concat (repeat 3 [None, empty])],
      repeat 7 empty,
      [empty, ...List.concat (repeat 3 [None, empty])],
      repeat 7 empty,
      [empty, ...List.concat (repeat 3 [None, empty])],
      [empty, empty, empty, empty, empty, empty, c {...empty_, doors: [S]}]
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
    cells: [[c {...empty_, label: "20", walls: [W, N]}]],
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
      [c {...empty_, label: "21", walls: [E]}, empty, empty],
      [c {...empty_, walls: [E]}, c {...empty_, walls: [E]}, empty],
      [c {...empty_, walls: [E]}, c {...empty_, walls: [E]}, empty],
      [c {...empty_, walls: [E]}, c {...empty_, walls: [E]}, empty],
      [c {...empty_, walls: [E]}, c {...empty_, walls: [E]}, empty],
      [c {...empty_, walls: [E]}, c {...empty_, walls: [E]}, empty],
      [empty, c {...empty_, walls: [E]}, empty]
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
      List.concat [repeat 7 None, [c {...empty_, doors: [N], secretDoors: [W]}]],
      [c {...empty_, label: "22"}, ...repeat 7 empty],
      [empty, ...List.concat (repeat 3 [None, empty])],
      [
        c {...empty_, doors: [W]},
        empty,
        c {...empty_, doors: [S]},
        empty,
        empty,
        c {...empty_, doors: [S]},
        empty
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
      [c {...empty_, label: "23", walls: [W, N]}, empty, c {...empty_, walls: [N]}],
      repeat 3 empty,
      [c {...empty_, label: "A", walls: [S]}, c {...empty_, walls: [S]}, c {...empty_, walls: [S]}]
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
      [c {...empty_, label: "24", walls: [W, N]}, empty, c {...empty_, walls: [E, N]}],
      [c {...empty_, walls: [W]}, empty, c {...empty_, walls: [E]}],
      [
        c {...empty_, walls: [W, S]},
        c {...empty_, label: "A", walls: [S]},
        c {...empty_, walls: [S, E]}
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
      [None, c {...empty_, label: "25"}],
      [
        c {...empty_, doors: [S]},
        c {...empty_, doors: [E]},
        c {...empty_, doors: [S], walls: [N]}
      ],
      [c {...empty_, doors: [E]}, c {...empty_, doors: [E]}, c {...empty_, doors: [S]}],
      [c {...empty_, doors: [E]}, c {...empty_, doors: [N]}, c {...empty_, doors: [N]}],
      [
        None,
        c {...empty_, doors: [N]},
        c {...empty_, doors: [N]},
        empty,
        c {...empty_, label: "A"},
        empty,
        c {...empty_, label: "B"},
        empty,
        empty
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
      [c {...empty_, label: "26"}, empty, empty],
      [c {...empty_, doors: [W]}, empty, c {...empty_, doors: [E]}],
      [empty, empty, empty]
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
    cells: [[c {...empty_, label: "27", doors: [S], walls: [N]}]],
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
      [c {...empty_, label: "28"}, empty, c {...empty_, walls: [N]}, c {...empty_, walls: [N]}],
      List.concat [repeat 3 empty, [c {...empty_, walls: [E]}]],
      [empty, empty, empty, c {...empty_, doors: [E]}],
      List.concat [repeat 3 empty, [c {...empty_, walls: [E]}]]
    ],
    notes: [
      P "ROMPER ROOM",
      P "Zhaar blows off steam here. Foam wrapped weapons. If you lift one, lights descend and a crowd murmurs. Victory in the ensuing duel brings the winner a hail of 500 razor-sharp gold pieces (Zhaar never wins). The GP counts as litter. However! A character killed by the catoblepas lock in 26 will attract the attention of veteran corner man Elim Coolara, now a minor devil. Elim will, in exchange for the opportunity to follow the party around, appear twice to talk a character out of a tough spot. He will use onecharge to restore the dead PC."
    ]
  },
  {
    title: "FIXME",
    x: 15,
    y: 19,
    cells: [
      [c {...empty_, doors: [N], label: "x"}],
      List.concat [
        repeat 2 (c {...empty_, label: "x"}),
        [c {...empty_, label: "29"}],
        repeat 2 empty
      ],
      [empty, ...repeat 4 (c {...empty_, label: "x"})],
      List.concat [repeat 3 None, [empty, c {...empty_, label: "x"}]],
      [None, empty, ...repeat 3 (c {...empty_, label: "x"})],
      List.concat [[None], repeat 2 (c {...empty_, label: "x"}), repeat 2 empty],
      [None, ...repeat 4 (c {...empty_, label: "x"})],
      [None, ...repeat 4 (c {...empty_, label: "x"})],
      [None, ...repeat 4 (c {...empty_, label: "x"})],
      [
        None,
        c {...empty_, walls: [S]},
        c {...empty_, doors: [S]},
        c {...empty_, doors: [S]},
        c {...empty_, walls: [S]}
      ]
    ],
    notes: [
      P "LETHE",
      P "The river Lethe flows through this room under a low ceiling of Stygian boughs. It does what you think. Worse, \nthe trees are None of Barlgura, \nand one Akilith.",
      P "Doors",
      L ["S: Unlocked"]
    ]
  },
  {
    title: "FIXME",
    x: 15,
    y: 29,
    cells: [
      [c {...empty_, label: "30"}, ...repeat 5 empty],
      [
        c {...empty_, secretDoors: [W]},
        c {...empty_, label: "A"},
        c {...empty_, label: "C"},
        c {...empty_, label: "E"},
        c {...empty_, label: "G"},
        empty
      ],
      [
        empty,
        c {...empty_, label: "B"},
        c {...empty_, label: "D"},
        c {...empty_, label: "F"},
        c {...empty_, label: "H"},
        empty
      ]
    ],
    notes: [
      P "TREASURE",
      P "A chamber drowning in gold.",
      P "A: Literally None of solid gold.",
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
    cells: [[c {...empty_, label: "32"}, empty, empty, empty, empty], repeat 5 empty],
    notes: []
  }
];