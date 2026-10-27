int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 51;
    int v2 = 94;
    int v3 = 18;
    int v4 = 35;
    int v5 = 62;
    int v6 = 29;
    int v7 = 59;
    int i;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 18; i++) {
        v5 = v5 + v4;
    }
    v1 = __arr_didx[__idx_didx[0]];
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
