int test_func(void) {
    int v0 = 20;
    int v1 = 43;
    int v2 = 37;
    int v3 = 8;
    int i;
    v3 = v3 * 9;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
