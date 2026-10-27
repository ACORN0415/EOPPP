int test_func(void) {
    int v0 = 53;
    int v1 = 56;
    int v2 = 67;
    int v3 = 81;
    int v4 = 31;
    int i;
    if (v0 > v3) { v0 = v3; }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
