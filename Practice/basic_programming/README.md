# Basic Programming

This directory contains beginner C programs focused on variables, arithmetic,
input/output, and formula-based problem solving.

## Folder Guide

| Folder | Purpose |
| --- | --- |
| `01_fundamentals/` | Basic C syntax, arithmetic, characters, and simple calculations. |
| `02_formula_programs/` | Programs that apply formulas using user input. |
| `build/` | Local compiled executables. These are ignored for future commits. |

## How To Compile

From this directory, compile any program with `gcc`:

```bash
gcc 01_fundamentals/add_two_numbers.c -o build/add_two_numbers
./build/add_two_numbers
```

For programs that use math functions, link the math library:

```bash
gcc 01_fundamentals/power_function.c -o build/power_function -lm
./build/power_function
```

## Programs

| Program | Description |
| --- | --- |
| `01_fundamentals/add_two_numbers.c` | Adds two fixed integer values and prints the result. |
| `01_fundamentals/simple_interest_fixed_values.c` | Calculates simple interest using fixed values. |
| `01_fundamentals/simple_interest_user_input.c` | Calculates simple interest from user input. |
| `01_fundamentals/ascii_character_sum.c` | Shows how character values are stored as ASCII numbers. |
| `01_fundamentals/power_function.c` | Demonstrates the `pow()` function from `math.h`. |
| `02_formula_programs/area_and_perimeter.c` | Calculates rectangle and circle measurements. |
| `02_formula_programs/distance_converter.c` | Converts kilometers into meters, centimeters, inches, and feet. |
| `02_formula_programs/gross_salary.c` | Calculates gross salary using allowance percentages. |
| `02_formula_programs/fahrenheit_to_celsius.c` | Converts Fahrenheit temperature to Celsius. |
| `02_formula_programs/marks_percentage.c` | Calculates total marks and percentage for five subjects. |
