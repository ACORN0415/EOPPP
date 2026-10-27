int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1468[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 41;
    int v2 = 49;
    int v3 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_1468[i] = v2 + i; }
    v1 = v1 * 10;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
