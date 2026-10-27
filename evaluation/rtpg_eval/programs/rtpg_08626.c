int test_func(void) {
    int v0 = 71;
    int v1 = 1;
    int v2 = 63;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
