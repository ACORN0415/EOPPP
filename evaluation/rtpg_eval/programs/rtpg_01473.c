int test_func(void) {
    int v0 = 27;
    int v1 = 81;
    int v2 = 66;
    int v3 = 30;
    int v4 = 36;
    int v5 = 31;
    int v6 = 100;
    int v7 = 84;
    int i;
    v3 = v3 * 6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
