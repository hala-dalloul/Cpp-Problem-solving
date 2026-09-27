# Contributing

Thank you for helping improve C++ Problem Solving. Contributions of new solutions, clearer implementations, tests, documentation, and tooling are welcome.

## Before you start

- Search existing issues and pull requests to avoid duplicate work.
- Open an issue before making a large structural change.
- Never include contest solutions that are still under an active contest embargo.
- Make sure you have the right to contribute the code under the MIT License.

## Add or improve a solution

1. Fork the repository and create a focused branch.
2. Use a descriptive problem name for the `.cpp` file.
3. Keep the program self-contained and compatible with C++17.
4. Add a short comment with the problem source or URL when one is available.
5. Prefer clear names and standard-library facilities.
6. Include time and space complexity in a comment when the algorithm is not obvious.
7. Test normal cases and boundary cases.

Compile the changed solution before submitting:

```bash
g++ "Your Solution.cpp" -std=c++17 -O2 -Wall -Wextra -pedantic -o solution
```

## Pull requests

- Keep each pull request limited to one problem or one related improvement.
- Explain what changed and how you tested it.
- Link the related issue when one exists.
- Do not commit executables, build directories, IDE files, or input/output artifacts.
- Ensure automated checks pass.

By submitting a contribution, you agree that it will be licensed under the repository's MIT License.
