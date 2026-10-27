int test_func(void) {
    int v0 = 16;
    int v1 = 94;
    int v2 = 21;
    int v3 = 96;
    int v4 = 68;
    int v5 = 25;
    int v6 = 56;
    int v7 = 87;
    int i;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
