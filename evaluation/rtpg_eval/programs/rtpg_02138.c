int test_func(void) {
    int v0 = 78;
    int v1 = 38;
    int v2 = 79;
    int v3 = 91;
    int v4 = 52;
    int v5 = 66;
    int v6 = 85;
    int i;
    if (v3 > v5) { v3 = v5; }
    v2 = 13;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
