int test_func(void) {
    int v0 = 86;
    int v1 = 100;
    int v2 = 67;
    int v3 = 5;
    int v4 = 86;
    int v5 = 48;
    int v6 = 6;
    int v7 = 40;
    int i;
    v4 = v4 * 3;
    v5 = v5 - v6;
    v6 = v6 ^ v7;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
