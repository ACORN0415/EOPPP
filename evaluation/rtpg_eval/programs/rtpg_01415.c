int test_func(void) {
    int v0 = 25;
    int v1 = 50;
    int v2 = 54;
    int v3 = 23;
    int v4 = 99;
    int v5 = 92;
    int i;
    v1 = v1 - v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
