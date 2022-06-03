#include <stdio.h>

struct s {
  int a;
  int b[0];
};

struct t1 {
  struct s f;
  int c[3];
} g1 = {{1},{1,2}};

struct t2 {
  struct s f;
  int c[3];
} g2 = {{1,{}},{1,2}};

int main() {
  printf("%d %d %d %d\n", g1.f.a, g1.f.b[0], g1.f.b[1], g1.f.b[2]);
  printf("%d %d %d %d\n", g2.f.a, g2.f.b[0], g2.f.b[1], g2.f.b[2]);
  return 0;
}
