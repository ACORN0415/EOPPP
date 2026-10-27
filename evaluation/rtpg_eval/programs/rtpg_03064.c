int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 31;
    int v1 = 65;
    int v2 = 51;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v2;
    }
    v2 = v2 * 10;
    if (v0 > v1) { v0 = v1; }
    v2 = __helper(v2);
    int *__p = &v1;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
