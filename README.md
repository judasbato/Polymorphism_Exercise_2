# Polymorphism Exercise 2

This repository contains a small C++ project demonstrating the use of polymorphism through a set of simple bank account classes. The project defines an abstract `Account` base class and several derived classes (`Checking_Account`, `Savings_Account` and `Trust_Account`) which override deposit and withdrawal behavior. A basic driver program (`main.cpp`) shows how these classes can be used.

## Project structure

- `Account.h` / `Account.cpp` – base class representing a generic account
- `Savings_Account.h` / `Savings_Account.cpp` – account with interest rate
- `Checking_Account.h` / `Checking_Account.cpp` – account that charges a fee per withdrawal
- `Trust_Account.h` / `Trust_Account.cpp` – savings account with withdrawal limits and deposit bonuses
- `Account_Util.h` / `Account_Util.cpp` – helper functions for displaying, depositing and withdrawing from collections of accounts
- `main.cpp` – small example program
- `CMakeLists.txt` – build configuration using CMake

Generated build files are present under `cmake-build-debug/` (created by CLion) and are not required when building from scratch.

## Building

The project uses CMake and requires a C++17 compatible compiler. A typical build can be performed with:

```bash
cmake -S . -B build
cmake --build build
```

This will create an executable called `Polymorphism_Exercise_2` in the `build` directory.

## Running

After building, run the executable:

```bash
./build/Polymorphism_Exercise_2
```

The program currently contains a few example operations demonstrating the different account types.

## License

No license was specified in the repository.
