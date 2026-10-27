int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 74;
    int v1 = 87;
    int v2 = 43;
    int v3 = 84;
    int v4 = 37;
    int v5 = 95;
    int v6 = 65;
    int v7 = 86;
    int i;
    if (v2 > v3) { v2 = v3; }
    v7 = v7 + v1;
    v3 = v3 - v5;
    int *__p = &v7;
    *__p = *__p + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
