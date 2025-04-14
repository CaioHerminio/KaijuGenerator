// 🦖 KAIJU GENERATOR - JavaScript Edition

// Load readline to interact with the user
const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

// Syllables used to generate Kaiju names
const syllables1 = ["Giga", "Mega", "Ultra", "Zilla", "Kor", "Kaiju", "Titan", "Dino"];
const syllables2 = ["tro", "zi", "do", "ra", "gon"];
const syllables3 = ["-X", " Prime", " Omega", " Ultimus", " King"];

// Body descriptions
const bodyDescriptions = [
  "a six-legged shark with metal armor and goat horns",
  "a snake with a wolf's head, bird wings, and nine scorpion tails",
  "a gorilla with lava skin and iron fists",
  "a centipede made of stone and covered in spikes",
  "a crocodile with rhino armor and eagle talons",
  "a turtle with crystal shell and spider legs",
  "a lion with obsidian fur and tentacle mane",
  "a mantis with golden plating and bat wings",
  "a deer with armor made of bones and venomous fangs",
  "a horse with magma hooves and beetle horns",
  "a jellyfish floating with glass skin and serpent tendrils",
  "a dragonfly fused with sapphire scales and crab claws"
];

// Colors
const colors = ["black", "silver", "white", "red", "orange", "gold", "yellow", "green", "turquoise", "blue", "purple", "pink"];

// Rage ranks
const rageRanks = ["S", "A", "B", "C", "D", "E"];

// Utility functions
const getRandomElement = (arr) => arr[Math.floor(Math.random() * arr.length)];
const getRandomInt = (min, max) => Math.floor(Math.random() * (max - min + 1)) + min;

// Game starts
console.log("Welcome to the Kaiju Generator Service!");
console.log("Here, you can generate and purchase your own Kaiju to destroy planets and armies.\n");

rl.question("Press Enter to generate your Kaiju...", () => {
  // Generate attributes
  const kaijuName = getRandomElement(syllables1) + getRandomElement(syllables2) + getRandomElement(syllables3);
  const kaijuSize = getRandomInt(50, 300);
  const kaijuRage = getRandomElement(rageRanks);
  const kaijuDestruction = getRandomInt(10, 100);
  const kaijuPrice = getRandomInt(1_000_000, 10_000_000);
  const kaijuBody = getRandomElement(bodyDescriptions);

  const colorCount = getRandomElement([1, 2]);
  const shuffledColors = [...colors].sort(() => 0.5 - Math.random());
  const kaijuColors = shuffledColors.slice(0, colorCount);
  const kaijuColorDescription = kaijuColors.join(" and ");

  // Display result
  console.log("\nYour Kaiju has been generated!");
  console.log(`Name: ${kaijuName}`);
  console.log(`Size: ${kaijuSize} meters high`);
  console.log(`Color(s): ${kaijuColorDescription}`);
  console.log(`Rage Rank: ${kaijuRage}`);
  console.log(`Destruction Level: ${kaijuDestruction}%`);
  console.log(`Body Description: ${kaijuBody}`);
  console.log(`Price: $${kaijuPrice.toLocaleString()}`);

  rl.question("\nPress Enter to confirm your purchase...", () => {
    console.log("\nThank you for using the Kaiju Generator Service!");
    console.log("Happy destruction and world domination!");
    rl.close();
  });
});
