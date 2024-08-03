# Maze Game

A simple maze game implemented in C. In this game, the player navigates from an entrance to a goal through fixed pathways and walls. The game features a static maze where the walls and paths do not change during gameplay.

## Description

This repository contains the source code for a basic maze game written in C. The objective of the game is to find a path from the entrance to the goal. The maze is designed with fixed walls and paths, providing a straightforward puzzle experience.

## Features

- **Fixed Maze Layout:** The maze structure is predefined and does not change during the game.
- **Simple Controls:** Navigate through the maze using basic input commands.
- **Text-Based Interface:** The game operates entirely within a text-based console interface.

## Getting Started

### Prerequisites

To compile and run this maze game, you need a C compiler. Ensure you have one installed on your system. For example, GCC can be used on most platforms.

### Compilation

Clone the repository and navigate to the project directory:

```bash
git clone https://github.com/jubayer98/Maze-Game-in-C.git
cd Maze-Game-in-C
```

Compile the source code using a C compiler:

```bash
gcc -o maze maze.c
```

### Running the Game

After compiling the code, run the executable:

```bash
./maze
```

Follow the on-screen instructions to navigate through the maze.

## How It Works

The maze is represented as a grid of characters in the source code. The player can move up, down, left, or right using specific input keys. The game checks for valid moves and updates the player's position accordingly. The goal is to reach the designated endpoint of the maze.

## Contributing

Contributions are welcome! If you have suggestions for improvements or new features, feel free to open an issue or submit a pull request.

---

Enjoy solving the maze and happy coding!
