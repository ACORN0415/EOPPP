int test_func(void) {
    int v0 = 18;
    int v1 = 58;
    int v2 = 13;
    int v3 = 33;
    int v4 = 37;
    int v5 = 95;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v2;
    }
    v2 = v2 - v0;
    v2 = 37;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
