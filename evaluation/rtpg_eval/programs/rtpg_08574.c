int test_func(void) {
    int v0 = 94;
    int v1 = 33;
    int v2 = 19;
    int v3 = 6;
    int v4 = 25;
    int v5 = 42;
    int v6 = 100;
    int v7 = 11;
    int i;
    v5 = v5 - v3;
    v3 = v3 * 9;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
