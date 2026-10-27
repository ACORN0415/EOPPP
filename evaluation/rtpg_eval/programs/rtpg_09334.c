int test_func(void) {
    int v0 = 41;
    int v1 = 45;
    int v2 = 97;
    int v3 = 36;
    int v4 = 97;
    int v5 = 71;
    int i;
    v5 = v5 - v3;
    v4 = v4 * 9;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
