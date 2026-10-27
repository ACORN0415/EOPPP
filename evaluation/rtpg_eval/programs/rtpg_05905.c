int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5905[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 70;
    int v2 = 44;
    int v3 = 54;
    int v4 = 83;
    int v5 = 71;
    int v6 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_5905[i] = v2 + i; }
    v5 = 32;
    v2 = v2 + v3;
    v3 = __helper(v3);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
