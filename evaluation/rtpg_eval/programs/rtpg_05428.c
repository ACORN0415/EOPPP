int test_func(void) {
    int v0 = 46;
    int v1 = 65;
    int v2 = 77;
    int v3 = 52;
    int v4 = 97;
    int i;
    v3 = v3 * 8;
    v2 = v2 - v0;
    for (i = 0; i < 19; i++) {
        v2 = v2 + v4;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    v0 = v0 % (v3 + 1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
