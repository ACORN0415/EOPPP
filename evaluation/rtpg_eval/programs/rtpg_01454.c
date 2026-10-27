int test_func(void) {
    int v0 = 9;
    int v1 = 79;
    int v2 = 2;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
