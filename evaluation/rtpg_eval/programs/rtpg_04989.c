int test_func(void) {
    int v0 = 93;
    int v1 = 99;
    int v2 = 31;
    int v3 = 39;
    int v4 = 67;
    int v5 = 88;
    int v6 = 23;
    int i;
    v0 = v0 - v6;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v6;
    }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
