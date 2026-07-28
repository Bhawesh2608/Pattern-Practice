#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);

  for (int i = n; i >= 1; i--) {
    int tmp = i - 1;
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("%d ", tmp);
        tmp--;
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
