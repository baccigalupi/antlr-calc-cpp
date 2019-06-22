# Calc - a calculator written in C++ with Antlr4

This is a test compiler parser for handling basic math expressions. The real
goal is to understand linking Antlr with C++ code to build any compiler. It's
hard in not fun ways.

I am using Visual Studio Code which auto generates the Antlr c++ runtime
specific to this grammar whenever the grammar file changes. More compiling setup
would be required without this niceity.

## Dependencies
The project uses `cmake` to build `make` files with the right dependencies.

`brew install cmake`

I also installed Antlr and the CPP runtime using brew:

`brew install antlr`
`brew install antlr4-cpp-runtime`

I copied the antlr jar to `src/lib/antlr` to make this project a bit more
self-contained.

I left the cpp runtime where it was and in the cmake config set a path to that
runtime.

## Running the application

To rebuild dependencies use cmake:

`cmake . # from the root directory of the project`

To compile the application use make:

`make`

That puts a binary in `bin/calc`