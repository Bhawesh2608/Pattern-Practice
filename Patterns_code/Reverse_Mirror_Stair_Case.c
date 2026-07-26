#include <stdio.h>

int main() {

  int n;
  printf("Enter N ");
  scanf("%d", &n);

  for (int i = n; i >= 1; i--) {

    int k;
    for (int j = 1; j <= n; j++) {
      if (i % 2 == 0) {
        k = i;
      } else {
        k = i + 1;
      }
    }

    for (int g = n; g >= 1; g--) {
      if (g > k)
        printf(" ");
    }

    for (int j = 1; j <= n; j++) {
      if (j <= k) {
        printf("* ");
      }
    }

    printf("\n");
  }

  return 0;
}
