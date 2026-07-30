#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j == 1 || i == j) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    for (int j = n; j >= 1; j--) {
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
