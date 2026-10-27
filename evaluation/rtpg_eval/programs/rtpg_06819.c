int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6819[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 90;
    int v2 = 37;
    int v3 = 52;
    int v4 = 93;
    int v5 = 83;
    int v6 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_6819[i] = v2 + i; }
    if (v2 > v6) { v2 = v6; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
