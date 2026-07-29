#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {

      if (j <= i) {
        printf(" ");
      }
    }
    char tmp = 'A' + n - i;
    for (int j = 1; j <= n; j++) {

      if (j == 1 || i + j == n + 1) {
        printf("%c ", tmp);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
