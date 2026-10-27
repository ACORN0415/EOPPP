int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 7;
    int v2 = 96;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v1;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v1 = __arr_didx[__idx_didx[0]];
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
