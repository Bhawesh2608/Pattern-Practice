#include <stdio.h>

int main() {
  int n;
  printf("enter n ");
  scanf("%d", &n);

  for (int i = 1; i <= n / 2 + 1; i++) {
    for (int j = n / 2 + 1; j >= 1; j--) {
      if (j <= i) {
        printf("%d", j);
      } else {
        printf(" ");
      }
    }
    for (int j = 2; j <= n / 2 + 1; j++) {
      if (j <= i) {
        printf("%d", j);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  for (int i = (n / 2 + 1) - 1; i >= 1; i--) {
    for (int j = n / 2 + 1; j >= 1; j--) {
      if (j <= i) {
        printf("%d", j);
      } else {
        printf(" ");
      }
    }
    for (int j = 2; j <= n / 2 + 1; j++) {
      if (j <= i) {
        printf("%d", j);
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
