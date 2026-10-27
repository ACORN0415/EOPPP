int __arr_6130[10];
int test_func(void) {
    int v0 = 85;
    int v1 = 21;
    int v2 = 48;
    int v3 = 17;
    int v4 = 91;
    int v5 = 45;
    int i;
    if (v2 > v4) { v2 = v4; }
    v1 = v1 * 3;
    for (i = 0; i < 10; i++) { __arr_6130[i] = v2 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
