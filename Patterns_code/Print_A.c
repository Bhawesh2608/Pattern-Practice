#include <stdio.h>

int main() {
	int n;
	printf("Enter N (e.g., 7 or 8): ");
	scanf("%d", &n);

	int width = n / 2 + 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if(j<=width) {
				if (i == 1 || i == n / 2 || j == 1 || j == width) {
					if (i == 1 && (j == 1 || j == width)) {
						printf("  ");
					} else {
						printf("* ");
					}
				} else {
					printf("  "); 
				}
			}
		}
		printf("\n");
	}

	return 0;
}
