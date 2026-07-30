#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);

  for (int i = 1; i <= n / 2; i++) {
    for (int j = 1; j <= n / 2; j++) {
      if (i == 1 || i == n / 2 || j == 1 || j == n / 2) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
  for (int i = 1; i <= n / 2; i++) {
    for (int j = 1; j <= n / 2; j++) {
      if (j == 1) {
        printf("* ");
      }
    }
    printf("\n");
  }

  return 0;
}
