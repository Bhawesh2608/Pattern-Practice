#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);

  for (int i = 1; i <= n / 2 + 1; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= n - i) {
        printf(" ");
      }
    }
    int tmp = 1;
    for (int j = 1; j <= n / 2 + 1; j++) {
      if (j <= i) {
        printf("%d", tmp);
        if (j < i) {
          printf("*");
        }
        tmp++;
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  for (int i = (n / 2 + 1) - 1; i >= 1; i--) {
    for (int j = 1; j <= n; j++) {
      if (j <= n - i) {
        printf(" ");
      }
    }
    int tmp = 1;
    for (int j = 1; j <= n / 2 + 1; j++) {
      if (j <= i) {
        printf("%d", tmp);
        if (j < i) {
          printf("*");
        }
        tmp++;
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
