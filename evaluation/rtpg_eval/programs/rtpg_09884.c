int test_func(void) {
    int v0 = 72;
    int v1 = 18;
    int v2 = 42;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
