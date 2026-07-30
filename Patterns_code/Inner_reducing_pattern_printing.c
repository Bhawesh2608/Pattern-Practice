#include <stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);

  int N = 2 * n - 1;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {

      // Calculate distances to the 4 edges
      int top = i - 1;
      int left = j - 1;
      int bottom = N - i;
      int right = N - j;

      // Assume 'top' is the minimum distance to start
      int min_dist = top;

      // Compare with the rest manually
      if (left < min_dist) {
        min_dist = left;
      }
      if (bottom < min_dist) {
        min_dist = bottom;
      }
      if (right < min_dist) {
        min_dist = right;
      }

      // Print the value
      printf("%d ", n - min_dist);
    }
    printf("\n");
  }

  return 0;
}
