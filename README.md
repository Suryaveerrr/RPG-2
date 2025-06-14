RPG-2 – C++ Text-Based Pokémon RPG

This is a structured and modular C++ project representing a Pokémon-themed text-based RPG. Built with object-oriented programming principles, this version enhances the simplicity of the first prototype into a well-organized, extensible codebase.

Project Overview

This game simulates the beginning of a Pokémon adventure where the player is introduced by Professor Oak, selects a Pokémon, and is guided through an early quest-like flow. The game uses multiple classes to simulate entities and interactions, including Player, Pokemon, and ProfessorOak.

Features

- Object-Oriented Design  
  All key components such as Pokémon, the player, and Professor Oak are modeled as C++ classes, encapsulating related data and behavior.

- Constructor Overloading  
  Includes default, parameterized, and copy constructors for better control over object initialization.

- Enums for Type Safety  
  enum class is used for Pokémon types (FIRE, WATER, GRASS, etc.) and Pokémon choices, ensuring cleaner logic and better code readability.

- Structured Dialogue and Flow  
  The player is greeted, prompted to enter their name, and then guided through Pokémon selection with detailed, formatted interaction.

- Utility Functions  
  A Utility class offers helper functions like clearInputBuffer(), waitForEnter(), and clearConsole() to improve user experience and control terminal behavior.

- Modular Architecture  
  The code is broken down into separate .cpp and .hpp files for each class and utility, following best practices in scalable C++ development.

How This is Different from the First Version

Feature                         | First Version                   | RPG-2 (Current Version)
-------------------------------|----------------------------------|---------------------------------------------------
Code Structure                 | Single-file procedural code      | Multi-file OOP-based project
Player                         | Raw strings and variables        | Dedicated Player and Pokemon classes
Type System                    | Hardcoded strings                | Strongly typed using enum class PokemonType
Modularity                     | None                             | Header/source files for each class
Reusability and Scalability    | Minimal                          | Designed for expansion with clear architecture
User Interaction               | Basic cin/cout                   | Structured interaction with methods and prompts
Visual Cleanup                 | None                             | Utility functions for cleaner input/output



