#🦖 KAIJU GENERATOR - Python Edition

import random

# Syllables that will be used to generate the name of the kaiju by comining one from each list
syllables1 = ["Giga", "Mega", "Ultra", "Zilla", "Kor", "Kaiju", "Titan", "Dino"]
syllables2 = ["tro", "zi", "do", "ra", "gon"]
syllables3 = ["-X", " Prime", " Omega", " Ultimus", " King"]

# Body descriptions for the kaiju
body_descriptions = [
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
]

# The colors for the kaiju
colors = ["black", "silver", "white", "red", "orange", "gold", "yellow", "green", "turquoise", "blue", "purple", "pink"]

# The rage ranks for the kaiju. S = the highest rank. E = the lowest rank
rage_ranks = ["S", "A", "B", "C", "D", "E"]

# Game start
print("Welcome to the Kaiju Generator Service!")
print("Here, you can generate and purchase your own Kaiju to destroy planets and armies.")
input("Press Enter to generate your Kaiju...")

# Generate random Kaiju attributes
kaiju_name = random.choice(syllables1) + random.choice(syllables2) + random.choice(syllables3)
kaiju_size = random.randint(50, 300)  # Size in meters
kaiju_rage = random.choice(rage_ranks)
kaiju_destruction = random.randint(10, 100)  # Destruction level in percentage
kaiju_price = random.randint(1_000_000, 10_000_000)  # Price in dollars
kaiju_body = random.choice(body_descriptions)

# Color logic: 1 or 2 distinct colors
color_count = random.choice([1, 2])
kaiju_colors = random.sample(colors, color_count)
kaiju_color_description = " and ".join(kaiju_colors)

# Show the generated Kaiju
print("\nYour Kaiju has been generated!")
print(f"Name: {kaiju_name}")
print(f"Size: {kaiju_size} meters high")
print(f"Color(s): {kaiju_color_description}")
print(f"Rage Rank: {kaiju_rage}")
print(f"Destruction Level: {kaiju_destruction}%")
print(f"Body Description: {kaiju_body}")
print(f"Price: ${kaiju_price:,}")

# Confirm purchase
input("\nPress Enter to confirm your purchase...")

# Thank you message
print("\nThank you for using the Kaiju Generator Service!")
print("Happy destruction and world domination!")
