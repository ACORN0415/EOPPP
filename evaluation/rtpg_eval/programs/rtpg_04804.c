int test_func(void) {
    int v0 = 65;
    int v1 = 44;
    int v2 = 42;
    int v3 = 28;
    int i;
    v2 = v2 - v3;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v2;
    }
    v3 = v3 ^ v0;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
