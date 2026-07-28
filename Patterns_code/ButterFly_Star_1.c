#include <stdio.h>

int main() {

  int n;
  printf("Enter N \n");
  scanf("%d", &n);
  printf("\n");

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    for (int j = n - 1; j >= 1; j--) {
      if (j <= i) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    for (int j = n - 1; j >= 1; j--) {
      if (j <= i) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
