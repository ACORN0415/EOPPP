int test_func(void) {
    int v0 = 70;
    int v1 = 8;
    int v2 = 23;
    int v3 = 42;
    int v4 = 64;
    int v5 = 54;
    int v6 = 91;
    int i;
    v0 = 13;
    if (v3 > v2) { v3 = v2; }
    v2 = v2 * 4;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
