int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 46;
    int v1 = 36;
    int v2 = 3;
    int v3 = 78;
    int v4 = 99;
    int v5 = 42;
    int v6 = 78;
    int v7 = 69;
    int i;
    v2 = 28;
    int *__p = &v7;
    *__p = *__p + 1;
    v2 = __helper(v2);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
