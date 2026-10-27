int __arr_7677[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 26;
    int v2 = 27;
    int v3 = 61;
    int v4 = 0;
    int v5 = 86;
    int v6 = 38;
    int v7 = 65;
    int i;
    v2 = v2 * 3;
    for (i = 0; i < 10; i++) { __arr_7677[i] = v2 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
