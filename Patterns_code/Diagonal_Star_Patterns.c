#include <stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == 1 || j == 1 || i == j || i == n || j == n || i + j == n + 1) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
