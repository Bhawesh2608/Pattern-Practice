#include <stdio.h>

int main() {
  int n;
  printf("enter n:-");
  scanf("%d", &n);

  for (int i = n; i >= 1; i--) {
    int tmp = 1;
    for (int j = 1; j <= n; j++) {
      if (j <= n - i) {
        printf(" ");
        tmp++;
      }
    }
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("%d ", tmp);
        tmp++;
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
  for (int i = 2; i <= n; i++) {
    int tmp = 1;
    for (int j = 1; j <= n; j++) {
      if (j <= n - i) {
        printf(" ");
        tmp++;
      }
    }
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("%d ", tmp);
        tmp++;
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
