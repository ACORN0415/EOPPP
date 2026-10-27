int test_func(void) {
    int v0 = 64;
    int v1 = 2;
    int v2 = 26;
    int v3 = 54;
    int v4 = 32;
    int v5 = 98;
    int v6 = 58;
    int i;
    v2 = v2 + v6;
    if (v1 > v5) { v1 = v5; }
    v2 = v2 - v6;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
