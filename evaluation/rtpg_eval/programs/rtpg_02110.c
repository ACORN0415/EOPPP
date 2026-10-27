int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2110[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 89;
    int v2 = 82;
    int v3 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_2110[i] = v0 + i; }
    v2 = v2 % (v3 + 1);
    v3 = __helper(v3);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
