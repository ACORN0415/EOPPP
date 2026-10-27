int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 71;
    int v1 = 97;
    int v2 = 78;
    int v3 = 18;
    int v4 = 77;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v4;
    }
    v0 = v0 + v2;
    v4 = __helper(v4);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
