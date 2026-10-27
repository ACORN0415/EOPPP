int test_func(void) {
    int v0 = 39;
    int v1 = 80;
    int v2 = 22;
    int v3 = 72;
    int v4 = 16;
    int v5 = 100;
    int i;
    v0 = 31;
    v3 = v3 + v4;
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
