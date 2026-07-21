#include<stdio.h>

int main() {
  int n;
  printf("enter n:-");
  scanf("%d",&n);

  for(int i=1; i<=n; i++) {
    int tmp=1;
    if(i<= (n/2)+1) {
      tmp=i;
    }
    else {
      tmp = n - i + 1;
    }

    for(int j=1; j<=n; j++) {
      if(j<=tmp || j >=(n - tmp + 1)) {
        if((i+j)%2==0) {
          printf("* ");
        }
        else {
          printf("  ");
        }
      }
      else {
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}
