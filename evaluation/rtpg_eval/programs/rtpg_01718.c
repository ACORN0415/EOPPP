int test_func(void) {
    int v0 = 52;
    int v1 = 56;
    int v2 = 61;
    int v3 = 22;
    int v4 = 87;
    int v5 = 43;
    int v6 = 3;
    int v7 = 48;
    int i;
    for (i = 0; i < 11; i++) {
        v3 = v3 + v7;
    }
    v7 = 26;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v7 = v7 + 1; }
      } }
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
