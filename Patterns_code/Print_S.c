
#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);
  int mid = n / 2 + 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == 1 || i == n) {
        printf("*");
      } else if ((j == 1 && i < n / 2 + 1) || (j == n && i > n / 2 + 1)) {
        printf("*");
      } else if (i == n / 2 + 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
