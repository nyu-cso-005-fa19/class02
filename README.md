# Exercises for Class 2

To get a local copy of the repository, open a terminal and enter the
directory where you want to keep your files for CSO. Then execute the
following commands:

```bash
git clone https://github.com/nyu-cso-005-fa19/class02.git
cd class02
```

The directory `src` contains three C files for three C separate
applications:

```
src/default_values.c
src/scopes.c
src/expressions.c
```

To compile, e.g., `default_values.c` execute the following command:

```bash
gcc -Wall -o default_values src/default_values.c
```

This will produce an executable file called `default_values` in the current
directory, which you can run with

```bash
./default_values
```

Each file corresponds to a concept we learned in class.

## Exercise 1: Default Values

Inspect the program `src/default_values.c`. Compile and run it.

1. What values did you expect to see on the screen?
2. What values did you see on the screen?
3. Run the program again. Which values change? Which values don't change? Why?
4. What can we say about unintialized variables in C?

## Exercise 2: Scoping

Inspect the program `src/scopes.c`.

1. For each variable `a` defined in the program state its scope. Will the program run? Why or why not? Run the program and verify your result.
2. Now uncomment the commented out line. Now for each variable `a` defined in the program state its scope. Will the program run? Why or why not? Run the program and verify your results.
