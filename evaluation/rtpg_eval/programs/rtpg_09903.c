int __arr_9903[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 81;
    int v2 = 78;
    int v3 = 53;
    int v4 = 51;
    int v5 = 78;
    int v6 = 41;
    int i;
    if (v5 > v2) { v5 = v2; }
    for (i = 0; i < 10; i++) { __arr_9903[i] = v5 + i; }
    v6 = 29;
    int *__p = &v2;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v6 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
