int test_func(void) {
    int v0 = 9;
    int v1 = 23;
    int v2 = 87;
    int v3 = 16;
    int v4 = 99;
    int v5 = 54;
    int v6 = 7;
    int v7 = 60;
    int i;
    if (v1 > v0) { v1 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v4 = v4 & v2;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
