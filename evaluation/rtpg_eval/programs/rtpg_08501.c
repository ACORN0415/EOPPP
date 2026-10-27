int __arr_8501[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 52;
    int v2 = 66;
    int v3 = 34;
    int v4 = 31;
    int v5 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_8501[i] = v2 + i; }
    v1 = v1 + v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
