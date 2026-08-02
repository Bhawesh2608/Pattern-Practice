#include <stdio.h>

int main() {
  int n;
  printf("Enter N ");
  scanf("%d", &n);

  for (int i = n - 1; i >= 0; i--) {
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf(" ");
      }
    }
    for (int jj = 0; jj <= n; jj++) {
      if (jj + i < n) {

        int temp_jj = jj;
        int temp_i = i;
        int non_zero = 0;

        for (; temp_jj > 0 && temp_i > 0; temp_jj /= 2, temp_i /= 2) {
          if ((temp_jj % 2 == 1) && (temp_i % 2 == 1)) {
            non_zero = 1;
            break;
          }
        }

        if (non_zero)
          printf("  ");
        else
          printf("* ");
      }
    }
    printf("\n");
  }

  return 0;
}
