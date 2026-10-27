int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 33;
    int v2 = 94;
    int v3 = 78;
    int v4 = 11;
    int v5 = 84;
    int v6 = 49;
    int v7 = 62;
    int i;
    v1 = 94;
    v3 = __helper(v3);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
