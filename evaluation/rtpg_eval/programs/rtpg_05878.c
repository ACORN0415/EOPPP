int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5878[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 72;
    int v2 = 93;
    int v3 = 69;
    int v4 = 80;
    int v5 = 99;
    int v6 = 27;
    int v7 = 26;
    int i;
    v0 = 9;
    v0 = v0 - v5;
    for (i = 0; i < 10; i++) { __arr_5878[i] = v7 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
