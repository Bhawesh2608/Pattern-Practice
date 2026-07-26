#include <stdio.h>

int main() {

  int n;
  printf("Enter N ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int k;
      if (i % 2 == 0) {
        k = i;
      } else {
        k = i + 1;
      }
      if (j <= k) {
        printf("* ");
      }
    }
    printf("\n");
  }

  return 0;
}
