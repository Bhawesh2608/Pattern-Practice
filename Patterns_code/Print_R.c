#include <stdio.h>

int main() {
    int n;
    printf("Enter N ");
    scanf("%d", &n);

    int mid = n / 2 + 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == 1) {
                printf("*");
            }
            else if((i == 1 || i == mid) && j < n) {
                printf("*");
            }
            else if(j == n && i > 1 && i < mid) {
                printf("*");
            }
            else if(i > mid && j == i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
