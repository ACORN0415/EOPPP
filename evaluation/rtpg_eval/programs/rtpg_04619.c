int __arr_4619[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 88;
    int v2 = 37;
    int v3 = 36;
    int v4 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_4619[i] = v3 + i; }
    v3 = v3 + v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v0 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
