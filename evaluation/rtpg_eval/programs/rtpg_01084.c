int test_func(void) {
    int v0 = 5;
    int v1 = 30;
    int v2 = 91;
    int v3 = 91;
    int v4 = 64;
    int i;
    v4 = 65;
    v3 = v3 * 5;
    if (v0 > v3) { v0 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
