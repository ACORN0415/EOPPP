int __arr_4625[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 85;
    int v2 = 41;
    int v3 = 18;
    int i;
    v3 = v3 + v0;
    for (i = 0; i < 10; i++) { __arr_4625[i] = v3 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
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
