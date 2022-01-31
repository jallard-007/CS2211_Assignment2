 /* 
Title: CS2211 Assignment 2
Purpose: Convert metric to/from imperial
Author: Justin Allard
Student #: 251204941 
*/
#include <stdio.h>

void conversion(char subSelection, const char optionOne, const char * optionOneName, const char * optionTwoName, const float multiplier) {
  float value;
  printf("Enter a value: ");
  scanf("\n%f", &value);
  if (subSelection == optionOne)
    printf("%.2f %s(s) is %.2f %s(s)\n", value, optionOneName, value * multiplier, optionTwoName);
  else 
    printf("%.2f %s(s) is %.2f %s(s)\n", value, optionTwoName, value / multiplier, optionOneName);
}

char subMenuSelector(const char optionOne, const char * optionOneName, const char optionTwo, const char * optionTwoName) {
  char selection;
  printf("%c for conversion from %s to %s | %c for conversion from %s to %s\nSelect one of the above options: ", optionOne, optionOneName, optionTwoName, optionTwo, optionTwoName, optionOneName);
  scanf("\n%c", &selection);
  while (selection != optionOne && selection != optionTwo) {
    printf("Invalid Input, try again: ");
    scanf("\n%c", &selection);
  }
  return selection;
}

int main() {
  int selection;
  for (; ; ) {
    printf("1 for conversion between Kilometres and Miles\n2 for conversion between Liters and Gallons\n3 for conversion between Hectares and Acres\n4 for conversion between Kilograms and Pounds\n5 to Quit\nSelect one of the above options: ");
    scanf("\n%d", &selection);
    while (selection > 5 || selection < 1) {
      printf("Invalid Input, try again: ");
      scanf("\n%d", &selection);
    }
    if (selection == 1) 
      conversion(subMenuSelector('K', "kilometers", 'M', "miles"), 'K', "kilometer", "mile", 0.621371);
    else if (selection == 2) 
      conversion(subMenuSelector('L', "liters", 'G', "gallons"), 'L', "liter", "gallon", 0.264172);
    else if (selection == 3) 
      conversion(subMenuSelector('H', "hectares", 'A', "acres"), 'H', "hectare", "acre", 2.47105);
    else if (selection == 4) 
      conversion(subMenuSelector('K', "kilograms", 'P', "pounds"), 'K', "kilogram", "pound", 2.20462);
    else 
      return 1;
  }
}