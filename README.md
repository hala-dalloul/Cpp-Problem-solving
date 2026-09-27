# C++ Problem Solving

[![C++ checks](https://github.com/hala-dalloul/Cpp-Problem-solving/actions/workflows/cpp-checks.yml/badge.svg)](https://github.com/hala-dalloul/Cpp-Problem-solving/actions/workflows/cpp-checks.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg)](CONTRIBUTING.md)

A growing collection of standalone C++ solutions for algorithms, data structures, and competitive-programming practice.

## Topics

- Arrays, strings, subsequences, and subarrays
- Binary search and searching techniques
- Sorting and frequency counting
- Prefix sums and two-pointer techniques
- Mathematics and number theory
- Grids, matrices, simulation, and queues

## Repository layout

Each `.cpp` file is an independent program with its own `main` function. File names generally match the problem or concept being practiced. Generated executables and local build directories are intentionally not tracked.

## Getting started

You need a C++17-compatible compiler such as GCC, Clang, or MSVC.

```bash
git clone https://github.com/hala-dalloul/Cpp-Problem-solving.git
cd Cpp-Problem-solving
g++ "Binary Search.cpp" -std=c++17 -O2 -Wall -Wextra -o solution
./solution
```

On Windows PowerShell, run the resulting program with `.\solution.exe`.

You can also configure the whole collection with CMake. Every source file becomes a separate executable target:

```bash
cmake -S . -B build
cmake --build build
```

## Contributing

Contributions that add a solution, improve an existing solution, document its complexity, or improve project tooling are welcome. Read [CONTRIBUTING.md](CONTRIBUTING.md) before opening a pull request.

Please use the issue templates for bug reports and solution proposals. For general help, see [SUPPORT.md](SUPPORT.md). Security concerns should follow [SECURITY.md](SECURITY.md).

## Community standards

Everyone participating in this project is expected to follow the [Code of Conduct](CODE_OF_CONDUCT.md).

## License

Copyright (c) 2026 Hala Dalloul. Released under the [MIT License](LICENSE).
