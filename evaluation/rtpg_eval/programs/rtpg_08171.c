int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 21;
    int v1 = 40;
    int v2 = 93;
    int v3 = 80;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v3;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
