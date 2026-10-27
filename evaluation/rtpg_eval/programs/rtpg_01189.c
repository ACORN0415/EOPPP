int test_func(void) {
    int v0 = 30;
    int v1 = 13;
    int v2 = 92;
    int v3 = 71;
    int v4 = 75;
    int i;
    v0 = 87;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
