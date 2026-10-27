int test_func(void) {
    int v0 = 12;
    int v1 = 61;
    int v2 = 18;
    int v3 = 47;
    int v4 = 96;
    int i;
    v0 = v0 * 9;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
