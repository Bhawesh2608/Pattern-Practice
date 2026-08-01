#include <stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);

  int left = 1;
  int right = n * (n + 1);

  for (int i = n; i >= 1; i--) {

    for (int s = 0; s <= n; s++) {
      if (s < n - i) {
        printf("  ");
      }
    }

    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("%d*", left);
        left++;
      }
    }

    int start = right - i + 1;
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("%d", start + j - 1);
      }

      if (j < i) {
        printf("*");
      }
    }

    right = right - i;

    printf("\n");
  }

  return 0;
}
