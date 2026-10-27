int test_func(void) {
    int v0 = 41;
    int v1 = 32;
    int v2 = 4;
    int i;
    if (v0 > v0) { v0 = v0; }
    v2 = v2 + v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
