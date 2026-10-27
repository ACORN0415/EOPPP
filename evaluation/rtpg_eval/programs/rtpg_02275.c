int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2275[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 68;
    int v2 = 87;
    int v3 = 16;
    int i;
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_2275[i] = v3 + i; }
    v0 = v0 * 2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
