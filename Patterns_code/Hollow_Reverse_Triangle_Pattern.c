#include <stdio.h>

int main() {
  int n;
  printf("enter n:-");
  scanf("%d", &n);

  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= n; j++) {
      if (j <= n - i) {
        printf(" ");
      }
    }
    for (int j = 1; j <= n; j++) {
      if (j == i || i == n || j == 1) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
