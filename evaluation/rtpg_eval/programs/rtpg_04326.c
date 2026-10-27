int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4326[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 85;
    int v2 = 2;
    int v3 = 22;
    int v4 = 81;
    int v5 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_4326[i] = v4 + i; }
    v1 = v1 * 2;
    v5 = __helper(v5);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v4 = v4 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
