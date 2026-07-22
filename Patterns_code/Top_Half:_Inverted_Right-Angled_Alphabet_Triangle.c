#include <stdio.h>

int main() {
  int n;
  printf("enter n ");
  scanf("%d", &n);

  for (int i = n; i >= 1; i--) {
    char tmp = 'A';
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("%c ", tmp);
        tmp++;
      }
    }
    printf("\n");
  }
  for (int i = 2; i <= n; i++) {
    char tmp = 'A';
    for (int j = 1; j <= n; j++) {
      if (j == i || j == 1 || i == n) {
        printf("%c ", tmp);
        tmp++;
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
