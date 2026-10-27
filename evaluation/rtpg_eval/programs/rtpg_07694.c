int test_func(void) {
    int v0 = 3;
    int v1 = 57;
    int v2 = 72;
    int v3 = 70;
    int v4 = 41;
    int v5 = 5;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v0;
    }
    v5 = v5 + v0;
    v5 = v5 - v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
