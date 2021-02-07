#include <stdio.h>

enum weekDays
{
  Sunday,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday
} days;

int main()
{
  days = Saturday;
  printf("Day %d", days + 1);
  return 0;
}