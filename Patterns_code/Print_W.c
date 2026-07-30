#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);

  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= n; j++) {
      if (j == 1 || i == j) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    for (int j = n - 1; j >= 1; j--) {
      if (j == 1 || i == j) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
