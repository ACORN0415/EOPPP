int __arr_3832[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 61;
    int v2 = 9;
    int v3 = 96;
    int v4 = 96;
    int v5 = 92;
    int v6 = 22;
    int v7 = 24;
    int i;
    v3 = v3 - v0;
    for (i = 0; i < 10; i++) { __arr_3832[i] = v3 + i; }
    v0 = __arr_didx[__idx_didx[0]];
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
