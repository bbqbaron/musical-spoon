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
  }
];