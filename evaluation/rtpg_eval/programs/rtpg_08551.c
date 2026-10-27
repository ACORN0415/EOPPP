int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8551[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 88;
    int v2 = 56;
    int v3 = 61;
    int v4 = 91;
    int v5 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_8551[i] = v4 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = __helper(v5);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
