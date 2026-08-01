#include <stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);

  int count = 1;

  for (int i = 1; i <= n; i++) {

    if (i % 2 != 0) {
      for (int j = 1; j <= n; j++) {
        if (j <= i)
          printf("%d", count++);
        if (j < i) {
          printf("*");
        }
      }
    }

    else {
      int temp = count + i - 1;
      count += i;

      for (int j = 1; j <= n; j++) {
        if (j <= i)
          printf("%d", temp--);
        if (j < i) {
          printf("*");
        }
      }
    }

    printf("\n");
  }

  return 0;
}
