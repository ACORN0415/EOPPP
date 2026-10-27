int __arr_2670[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 35;
    int v2 = 65;
    int v3 = 72;
    int v4 = 94;
    int v5 = 32;
    int v6 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_2670[i] = v4 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
