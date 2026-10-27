int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4295[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 22;
    int v2 = 18;
    int v3 = 52;
    int v4 = 85;
    int v5 = 62;
    int v6 = 23;
    int i;
    if (v6 > v5) { v6 = v5; }
    for (i = 0; i < 10; i++) { __arr_4295[i] = v5 + i; }
    v1 = 64;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    v6 = __helper(v6);
    v3 = v3 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
