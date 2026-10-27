int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7078[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 38;
    int v2 = 94;
    int v3 = 24;
    int v4 = 31;
    int v5 = 23;
    int v6 = 98;
    int i;
    v4 = v4 + v4;
    for (i = 0; i < 10; i++) { __arr_7078[i] = v1 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
