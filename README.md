# School Assignment for CS2111

## Part 1 | imperical and metric converter

The goal of the exercise is to implement a simple converter, called ”converter”, which works
as follows.

First, the user is asked what she/he wants to do. An integer can be entered with the following six actions associated with different values of the integer. You can assume that the user will always enter an integer.

- `1` for conversion between Kilometre and Mile (1 kilometre == 0.621371 miles)
- `2` for conversion between Litres and Gallons (1 litre == 0.264172 gallons)
- `3` for conversion between Hectares and Acres (1 hectare == 2.47105 acres)
- `4` for conversion between Kilograms and Pounds (1 kilogram == 2.20462 pounds)
- 5 for quit
- {any other integer} for prompting the user to try again.

In case of 1 to 4, the program will ask the direction of the conversion. In each case, one of two characters can be entered corresponding to each conversion direction. Your program should handle non-valid single character input values.

In case of 1, the program will prompt the user for two choices and wait for a character input

- `K` for conversion from Kilometre to Mile
- `M` for conversion from Mile to Kilometre

In case of 2, the program will prompt the user for two choices and wait for a character input

- `L` for conversion from Litres to Gallons
- `G` for conversion from Gallons to Litres

In case of 3, the program will prompt the user for two choices and wait for a character input

- `H` for conversion from Hectares to Acres
- `A` for conversion from Acres to Hectares

In case of 4, the program will prompt the user for two choices and wait for a character input

- `K` for conversion from Kilograms to Pounds
- `P` for conversion from Pounds to Kilograms

Then the program descriptively prompts the user for the input value ("Please enter a value..."), descriptively displays the result ("Your conversion is..."), and returns to the main menu. The input value should be a float number and we assume the user will always enter valid numbers.

## Part 2 | succinct program to convert any integer from 1-999 into the English word (in lower case)

You can assume the input is always one valid integer in the range 0-999 (ie. no negatives and no integers higher than 999). The integer will never have preceding zeros (eg. The input would be 1, never 001) or trailing decimal zeros (eg. The input would be 1, never 1.000).
Then the program descriptively prompts the user for the input value ("Please enter a value..."), descriptively displays the result ("You entered the number..."), and returns to the main menu.

Your programs should follow good programming styles, i.e. write clear code, choose good variable names, make proper comments, etc. Your program must have a comment block at the top describing the name of the program, it's purpose, it's author (ie. you and your student number), etc.
