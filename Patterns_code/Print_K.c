#include <stdio.h>

int main() {
    int n;
    printf("enter n ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--) {
        int mid = n / 2 + 1;
        int dist = i - mid;
        if(dist < 0) {
            dist = -dist;
        }
        for(int j = 1; j <= n; j++) {
            if(j == 1 || j == dist + 1) {
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
