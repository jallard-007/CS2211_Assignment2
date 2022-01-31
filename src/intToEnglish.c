 /*
Title: CS2211 Assignment 2 
Purpose: Succinct program to convert any integer from 1-999
Author: Justin Allard
Student #: 251204941
*/
#include <stdio.h>

char * getValue(int number, int weight) {
  switch (number) {
    case 0:
      if (weight == 0)
        return "ten";
      if (weight == 1)
        return "zero";
      return "";
    case 1:
      if (weight == 0)
        return "eleven";
      return "one";
    case 2:
      if (weight == 0) 
        return "twelve";
      if (weight == 2) 
        return "twenty";
      return "two";
    case 3:
      if (weight == 0)
        return "thirteen";
      if (weight == 2) 
        return "thirty";
      return "three";
    case 4:
      if (weight == 0)
        return "fourteen";
      if (weight == 2)
        return "forty";
      return "four";
    case 5:
      if (weight == 0)
        return "fifteen";
      if (weight == 2)
        return "fifty";
      return "five";
    case 6:
      if (weight == 0)
        return "sixteen";
      if (weight == 2)
        return "sixty";
      return "six";
    case 7:
      if (weight == 0)
        return "seventeen";
      if (weight == 2)
        return "seventy";
      return "seven";
    case 8:
      if (weight == 0)
        return "eighteen";
      if (weight == 2)
        return "eighty";
      return "eight";
    case 9:
      if (weight == 0)
        return "nineteen";
      if (weight == 2) 
        return "ninety";
      return "nine";
    default:
      return "";
  }
}

int main(){
  int number;
  for (; ; ) {
    printf("Please enter a value (1-999, 0 to quit): ");
    scanf("%d", &number);
    if (number == 0) {
      return 1;
    }
    const int firstDigit = number % 10;
    number /= 10;
    const int secondDigit = number % 10;
    const int thirdDigit = number / 10;
    printf("You entered the number ");
    if (thirdDigit > 0) {
      printf("%s hundred", getValue(thirdDigit, 3));
      if (secondDigit > 0 || firstDigit > 0) {
        printf(" and ");
      }
    }
    if (secondDigit == 1) {
      printf("%s", getValue(firstDigit, 0));
    } else if (secondDigit > 1) {
      printf("%s", getValue(secondDigit, 2));
      if (firstDigit > 0) {
        printf("-%s", getValue(firstDigit, 1));
      }
    } else if (firstDigit > 0) {
      printf("%s", getValue(firstDigit, 1));
    }
    printf("\n");
  }
}
