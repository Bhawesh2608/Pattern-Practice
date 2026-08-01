#include <stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);

  int total_cols = 2 * n - 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < total_cols; j++) {
      if (j < n - i) {
        printf("%c", 'A' + j);
      } else if (j >= n - 1 + i) {
        printf("%c", 'A' + (total_cols - 1 - j));
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
