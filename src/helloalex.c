#include<stdio.h>
#include<stdlib.h>

int main() {
  float avg;
  int add=0;
  int negative;
  int target;

  printf("select negative int: ");
  scanf("%d", &negative);
  target = negative -5;
  for(; negative >= target; --negative) {
    printf("%d\n", negative);
    add += negative;
  }
  avg = add / 5;
  printf("%0.2f\n", avg);
}
