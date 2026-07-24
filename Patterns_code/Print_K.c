#include <stdio.h>

int main()
{
	int n;
	printf("enter n ");
	scanf("%d",&n);

	for(int i=n; i>=1; i--) {
		for(int j=1; j<=n; j++) {
			if(j==i ||j==1) {
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(int i=2; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(j==i ||j==1) {
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
