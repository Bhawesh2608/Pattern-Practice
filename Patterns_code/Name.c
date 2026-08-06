#include <stdio.h>

void charA(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if ((j == 1 || j == n) && i > 1)
      printf("*");
    else if (i == 1 && j > 1 && j < n)
      printf("*");
    else if (i == n / 2 + 1)
      printf("*");
    else
      printf(" ");
  }
}

void charB(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (j == 1)
      printf("*");
    else if ((i == 1 || i == n / 2 + 1 || i == n) && j < n)
      printf("*");
    else if (j == n && i > 1 && i < n && i != n / 2 + 1)
      printf("*");
    else
      printf(" ");
  }
}

void charC(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (i == 1 || i == n || j == 1)
      printf("*");
    else
      printf(" ");
  }
}

void charD(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (j == 1)
      printf("*");
    else if ((i == 1 || i == n) && j < n)
      printf("*");
    else if (j == n && i > 1 && i < n)
      printf("*");
    else
      printf(" ");
  }
}

void charE(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (i == 1 || i == n || i == (n + 1) / 2 || j == 1)
      printf("*");
    else
      printf(" ");
  }
}

void charF(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (j == 1 || i == 1 || i == n / 2 + 1)
      printf("*");
    else
      printf(" ");
  }
}

void charG(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (j == 1 || i == 1 || i == n)
      printf("*");
    else if (i == n / 2 + 1 && j >= n / 2 + 1)
      printf("*");
    else if (j == n && i > n / 2 + 1)
      printf("*");
    else
      printf(" ");
  }
}

void charH(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (j == 1 || j == n || i == (n / 2) + 1)
      printf("*");
    else
      printf(" ");
  }
}

void charI(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (i == 1 || i == n || j == n / 2 + 1)
      printf("*");
    else
      printf(" ");
  }
}

void charJ(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (i == 1 || j == n / 2 + 1 || (j == 1 && i >= n / 2 + 1) ||
        (i == n && j <= n / 2 + 1))
      printf("*");
    else
      printf(" ");
  }
}

void charK(int i, int n) {
  int mid = n / 2 + 1;
  int dist = i - mid;
  if (dist < 0)
    dist = -dist;
  for (int j = 1; j <= n; j++) {
    if (j == 1 || j == dist + 1)
      printf("*");
    else
      printf(" ");
  }
}

void charL(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (i == n || j == 1)
      printf("*");
    else
      printf(" ");
  }
}

void charM(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (j == 1 || j == n)
      printf("*");
    else if (i <= n / 2 + 1 && (i == j || i + j == n + 1))
      printf("*");
    else
      printf(" ");
  }
}

void charN(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (j == 1 || j == n || j == i)
      printf("*");
    else
      printf(" ");
  }
}

void charO(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if ((i == 1 || i == n) && (j > 1 && j < n))
      printf("*");
    else if ((j == 1 || j == n) && (i > 1 && i < n))
      printf("*");
    else
      printf(" ");
  }
}

void charP(int i, int n) {
  int mid = n / 2 + 1;
  for (int j = 1; j <= n; j++) {
    if (j == 1)
      printf("*");
    else if ((i == 1 || i == mid) && j < n)
      printf("*");
    else if (j == n && i > 1 && i < mid)
      printf("*");
    else
      printf(" ");
  }
}

void charQ(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if ((i == 1 || i == n - 1) && (j > 1 && j < n - 1))
      printf("*");
    else if ((j == 1 || j == n - 1) && (i > 1 && i < n - 1))
      printf("*");
    else if (i == j && i >= n / 2 + 1)
      printf("*");
    else
      printf(" ");
  }
}

void charR(int i, int n) {
  int mid = n / 2 + 1;
  for (int j = 1; j <= n; j++) {
    if (j == 1)
      printf("*");
    else if ((i == 1 || i == mid) && j < n)
      printf("*");
    else if (j == n && i > 1 && i < mid)
      printf("*");
    else if (i > mid && j == i)
      printf("*");
    else
      printf(" ");
  }
}

void charS(int i, int n) {
  int mid = n / 2 + 1;
  for (int j = 1; j <= n; j++) {
    if (i == 1 || i == n || i == mid || (j == 1 && i <= mid) ||
        (j == n && i >= mid))
      printf("*");
    else
      printf(" ");
  }
}

void charT(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (i == 1 || j == n / 2 + 1)
      printf("*");
    else
      printf(" ");
  }
}

void charU(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if ((j == 1 || j == n) && i < n)
      printf("*");
    else if (i == n && j > 1 && j < n)
      printf("*");
    else
      printf(" ");
  }
}

void charV(int i, int n) {
  int mid = n / 2 + 1;
  for (int j = 1; j <= n; j++) {
    if (i <= mid && (j == i || j == n + 1 - i))
      printf("*");
    else if (i > mid && j == mid)
      printf("*");
    else
      printf(" ");
  }
}

void charW(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (j == 1 || j == n)
      printf("*");
    else if (i >= n / 2 + 1 && (i == j || i + j == n + 1))
      printf("*");
    else
      printf(" ");
  }
}

void charX(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (j == i || j == n + 1 - i)
      printf("*");
    else
      printf(" ");
  }
}

void charY(int i, int n) {
  int mid = n / 2 + 1;
  for (int j = 1; j <= n; j++) {
    if (i <= mid && (j == i || j == n + 1 - i))
      printf("*");
    else if (i > mid && j == mid)
      printf("*");
    else
      printf(" ");
  }
}

void charZ(int i, int n) {
  for (int j = 1; j <= n; j++) {
    if (i == 1 || i == n || i + j == n + 1)
      printf("*");
    else
      printf(" ");
  }
}

int main() {
  char name[100];
  int n = 5;

  printf("Enter Name: ");
  scanf("%s", name);

  printf("Enter Size of character: ");
  scanf("%d", &n);

  printf("\n");

  for (int i = 1; i <= n; i++) {
    for (int k = 0; name[k] != '\0'; k++) {
      char ch = name[k];

      switch (ch) {
      case 'A':
        charA(i, n);
        break;
      case 'B':
        charB(i, n);
        break;
      case 'C':
        charC(i, n);
        break;
      case 'D':
        charD(i, n);
        break;
      case 'E':
        charE(i, n);
        break;
      case 'F':
        charF(i, n);
        break;
      case 'G':
        charG(i, n);
        break;
      case 'H':
        charH(i, n);
        break;
      case 'I':
        charI(i, n);
        break;
      case 'J':
        charJ(i, n);
        break;
      case 'K':
        charK(i, n);
        break;
      case 'L':
        charL(i, n);
        break;
      case 'M':
        charM(i, n);
        break;
      case 'N':
        charN(i, n);
        break;
      case 'O':
        charO(i, n);
        break;
      case 'P':
        charP(i, n);
        break;
      case 'Q':
        charQ(i, n);
        break;
      case 'R':
        charR(i, n);
        break;
      case 'S':
        charS(i, n);
        break;
      case 'T':
        charT(i, n);
        break;
      case 'U':
        charU(i, n);
        break;
      case 'V':
        charV(i, n);
        break;
      case 'W':
        charW(i, n);
        break;
      case 'X':
        charX(i, n);
        break;
      case 'Y':
        charY(i, n);
        break;
      case 'Z':
        charZ(i, n);
        break;
      default:
        for (int j = 1; j <= n; j++)
          printf(" ");
        break;
      }
      printf("  "); // Character spacing
    }
    printf("\n");
  }

  return 0;
}
