int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 28;
    int v1 = 19;
    int v2 = 33;
    int v3 = 43;
    int v4 = 28;
    int v5 = 26;
    int i;
    v4 = 64;
    int *__p = &v1;
    *__p = *__p + 1;
    v5 = __helper(v5);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
