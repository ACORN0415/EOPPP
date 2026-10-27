int test_func(void) {
    int v0 = 68;
    int v1 = 56;
    int v2 = 72;
    int i;
    if (v0 > v1) { v0 = v1; }
    v1 = 56;
    v2 = v2 * 6;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
