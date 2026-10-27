int test_func(void) {
    int v0 = 15;
    int v1 = 32;
    int v2 = 86;
    int v3 = 81;
    int v4 = 81;
    int v5 = 92;
    int v6 = 22;
    int i;
    v5 = v5 * 3;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v3 = v3 ^ v5;
    return v0;
}
int main(void) { return test_func(); }
