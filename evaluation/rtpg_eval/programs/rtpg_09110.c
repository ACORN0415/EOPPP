int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 65;
    int v1 = 76;
    int v2 = 5;
    int v3 = 48;
    int v4 = 63;
    int i;
    v0 = v0 - v2;
    int *__p = &v3;
    *__p = *__p + 1;
    v1 = __helper(v1);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
