int test_func(void) {
    int v0 = 65;
    int v1 = 8;
    int v2 = 29;
    int v3 = 86;
    int v4 = 37;
    int v5 = 57;
    int v6 = 69;
    int i;
    v6 = 25;
    v3 = v3 * 6;
    v5 = v5 + v4;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
