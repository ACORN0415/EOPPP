int test_func(void) {
    int v0 = 82;
    int v1 = 58;
    int v2 = 40;
    int v3 = 72;
    int v4 = 8;
    int v5 = 29;
    int v6 = 80;
    int i;
    v6 = v6 * 5;
    v4 = v4 + v4;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v2;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
