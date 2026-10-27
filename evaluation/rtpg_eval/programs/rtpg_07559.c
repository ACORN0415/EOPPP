int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 44;
    int v1 = 71;
    int v2 = 8;
    int v3 = 53;
    int i;
    v0 = v0 + v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v3 = __helper(v3);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
