int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 66;
    int v2 = 86;
    int v3 = 75;
    int v4 = 97;
    int v5 = 88;
    int v6 = 47;
    int i;
    if (v3 > v3) { v3 = v3; }
    for (i = 0; i < 15; i++) {
        v6 = v6 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v5 = __arr_didx[__idx_didx[0]];
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
