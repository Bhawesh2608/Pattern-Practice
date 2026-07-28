#include <stdio.h>

int main() {

  int r;
  printf("Enter radius \n");
  scanf("%d", &r);
  printf("\n");
  int tmp = 2 * r;

  for (int i = 0; i <= tmp; i++) {
    int x = i - r;

    for (int j = 0; j <= tmp; j++) {
      int y = j - r;
      int dist_sq = x * x + y * y;

      if (dist_sq >= r * r - r && dist_sq <= r * r + r) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
