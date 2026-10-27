int test_func(void) {
    int v0 = 11;
    int v1 = 96;
    int v2 = 80;
    int v3 = 65;
    int v4 = 65;
    int v5 = 92;
    int v6 = 80;
    int i;
    v2 = v2 * 8;
    if (v0 > v1) { v0 = v1; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    v0 = v0 | v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
