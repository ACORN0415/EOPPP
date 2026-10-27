int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 71;
    int v1 = 48;
    int v2 = 60;
    int v3 = 55;
    int v4 = 27;
    int i;
    v4 = v4 + v1;
    for (i = 0; i < 14; i++) {
        v4 = v4 + v3;
    }
    if (v4 > v2) { v4 = v2; }
    v0 = v0 ^ v2;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
