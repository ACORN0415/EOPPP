int test_func(void) {
    int v0 = 31;
    int v1 = 21;
    int v2 = 64;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
    v0 = 58;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
