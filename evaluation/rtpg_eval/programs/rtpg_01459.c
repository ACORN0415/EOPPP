int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 64;
    int v1 = 12;
    int v2 = 17;
    int v3 = 20;
    int i;
    v3 = v3 + v3;
    v1 = v1 - v0;
    int *__p = &v3;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
