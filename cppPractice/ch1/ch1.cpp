#include <cstdio>

int absolute_value(int x) {
  if (x < 0) return (x * -1);
  else return x;
}

int sum(int x, int y) {
  return x + y;
}

int main() {
  int input = 80;

  printf("The absolute value of %d is %d", input, absolute_value(input));

  int val1 = 4;
  int val2 = 7;

  printf("\nThe sum of %d and %d is %d.", val1, val2, sum(val1, val2));
  
  return 0;
};