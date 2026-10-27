int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 85;
    int v2 = 86;
    int v3 = 90;
    int v4 = 42;
    int i;
    v1 = v1 + v4;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v0;
    }
    if (v0 > v2) { v0 = v2; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    v1 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
