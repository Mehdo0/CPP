42 C++ Modules

A comprehensive exploration of Object-Oriented Programming (OOP) within the strict parameters of the C++98 standard. This repository contains the complete progression of C++ modules from the 42 School Common Core, focused on architectural design and low-level resource management.

Project Overview

The 42 C++ curriculum transitions students from procedural programming in C to robust object-oriented software design. The modules emphasize understanding the mechanics of the language without relying on modern abstractions or automated memory management.

The Orthodox Canonical Class Form

From Module 02 onwards, every class is designed to be robust and predictable by implementing the four required member functions:

Default Constructor: For standard initialization.

Copy Constructor: To ensure deep copies of objects.

Copy Assignment Operator: For safe assignment between instances.

Destructor: For deterministic resource cleanup.

The Learning Path

The curriculum is structured as a progressive deep dive into the language, categorized into four main developmental phases:

I. Foundation and Memory

Initial modules focus on the transition from C to C++, covering namespaces, class syntax, and the critical distinction between stack and heap allocation. This phase introduces RAII (Resource Acquisition Is Initialization) to ensure memory safety.

II. Polymorphism and Inheritance

This phase explores how to build complex systems through class hierarchies. It covers operator overloading, fixed-point arithmetic, and both Ad-hoc and Subtype Polymorphism, utilizing abstract classes and interfaces.

III. Type Systems and Exceptions

Advanced logic is introduced through custom exception handling and the four C++ casts. This section ensures that software can handle runtime errors gracefully and manage type conversions with precision.

IV. Generic Programming and the STL

The final stage focuses on the Standard Template Library (STL). It covers templates (function and class), iterators, and the implementation of high-performance algorithms using various containers like vector, list, map, and stack.

Technical Specifications

Compilation Requirements

All exercises must be compiled with the following flags to ensure strict adherence to the C++98 standard:

c++ -Wall -Wextra -Werror -std=c++98


Constraints and Guidelines

Standard Library: Only C++98 headers are permitted.

Namespaces: The directive using namespace std; is strictly forbidden in header files.

Memory Management: All projects must be free of memory leaks. Manual management is verified using Valgrind.

Modern Features: Use of C++11 or later (e.g., auto, nullptr, long long, for-each loops) is not allowed.

Installation and Usage

To build and execute a specific exercise, navigate to the desired directory and utilize the provided Makefile:

# Clone the repository
git clone [https://github.com/your-username/42-cpp-modules.git](https://github.com/your-username/42-cpp-modules.git)

# Navigate to an exercise
cd 42-cpp-modules/cpp00/ex01

# Build and run
make
./phonebook


Author

Your Login | 42 Intra Profile

42 School Common Core

Disclaimer: This repository is intended for academic reference. Students are encouraged to implement their own solutions to fully grasp the complexities of the C++ language.
