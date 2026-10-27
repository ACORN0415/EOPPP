int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6222[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 85;
    int v2 = 24;
    int v3 = 13;
    int i;
    for (i = 0; i < 10; i++) { __arr_6222[i] = v0 + i; }
    v1 = v1 * 3;
    int *__p = &v0;
    *__p = *__p + 1;
    v2 = __helper(v2);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
