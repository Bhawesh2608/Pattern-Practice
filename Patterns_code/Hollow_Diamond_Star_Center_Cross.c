#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);
  int mid = (n / 2) + 1;
  printf("\n");

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == mid || j == mid || i + j == mid + 1 || i + mid == j + 1 ||
          j + mid == i + 1 || i + j == mid + n) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}
