int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8252[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 37;
    int v2 = 18;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 10; i++) { __arr_8252[i] = v2 + i; }
    v2 = __helper(v2);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
