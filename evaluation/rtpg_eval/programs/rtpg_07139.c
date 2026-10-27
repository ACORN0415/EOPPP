int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 95;
    int v2 = 47;
    int v3 = 85;
    int v4 = 68;
    int v5 = 40;
    int v6 = 15;
    int v7 = 46;
    int i;
    v6 = v6 + v4;
    v4 = __helper(v4);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
