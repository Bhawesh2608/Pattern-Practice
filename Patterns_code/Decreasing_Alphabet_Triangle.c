#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);
  char tmp = 'A' + n - 1;
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("%c ", tmp);
      } else {
        printf("  ");
      }
    }
    tmp -= 1;
    printf("\n");
  }

  return 0;
}
