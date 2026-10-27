int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6790[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 60;
    int v2 = 74;
    int v3 = 44;
    int v4 = 86;
    int v5 = 43;
    int v6 = 58;
    int v7 = 26;
    int i;
    v6 = v6 * 8;
    for (i = 0; i < 10; i++) { __arr_6790[i] = v3 + i; }
    v6 = v6 - v0;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v5 = v5 / (v3 + 1);
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
