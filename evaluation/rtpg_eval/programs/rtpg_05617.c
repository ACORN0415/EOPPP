int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5617[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 79;
    int v2 = 63;
    int v3 = 51;
    int v4 = 38;
    int i;
    if (v4 > v1) { v4 = v1; }
    for (i = 0; i < 10; i++) { __arr_5617[i] = v2 + i; }
    v1 = v1 + v2;
    v3 = __helper(v3);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
