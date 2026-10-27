int test_func(void) {
    int v0 = 10;
    int v1 = 92;
    int v2 = 88;
    int v3 = 15;
    int v4 = 11;
    int v5 = 50;
    int v6 = 67;
    int i;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v5;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
