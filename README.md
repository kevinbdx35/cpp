# C++ Exercises

A collection of C++ exercises covering structs, classes, inheritance, operator overloading, and templates.

## Technologies

- C++
- Code::Blocks

## Exercises

| Folder | Topic |
|--------|-------|
| `exo1.cpp` | Struct, loops, grade statistics |
| `exo2.cpp` | Pass by pointer vs. pass by reference |
| `exo3_class` | Classes — student management |
| `exo4_class` | Classes — bank account |
| `exo5_vecteur3d` | 3D vector class |
| `exo6_surcharge` | Operator overloading |
| `exo7` | Inheritance — Point / Circle |
| `exo8_heritage` | Inheritance — Person / Employee / Student |
| `exo9_heritage_multiple` | Multiple inheritance — University |
| `projet1` | Final project |

## Getting Started

Open the `.cbp` file for each exercise in Code::Blocks and build.

## Improvements

- Fixed bug in `exo1`: `total_notes = classe[i].note + 1` → `total_notes += classe[i].note` (accumulation was broken, leading to wrong average)
- Fixed undefined behavior in `exo1`: `note_min`/`note_max` now initialized after user input instead of from uninitialized array memory

## License

MIT
