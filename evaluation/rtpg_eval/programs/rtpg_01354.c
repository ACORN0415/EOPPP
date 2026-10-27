int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1354[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 93;
    int v2 = 33;
    int v3 = 4;
    int v4 = 1;
    int v5 = 18;
    int v6 = 89;
    int v7 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_1354[i] = v1 + i; }
    v3 = __helper(v3);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
