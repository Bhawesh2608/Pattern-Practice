#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);
  char tmp = 'A';
  for (int i = n; i >= 1; i--) {

    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("%c ", tmp);
      } else {
        printf("  ");
      }
    }
    tmp++;
    printf("\n");
  }

  return 0;
}
