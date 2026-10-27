int test_func(void) {
    int v0 = 86;
    int v1 = 88;
    int v2 = 24;
    int v3 = 40;
    int v4 = 57;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 19; i++) {
        v0 = v0 + v2;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
