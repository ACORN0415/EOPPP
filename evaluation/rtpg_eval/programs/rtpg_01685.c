int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 50;
    int v1 = 53;
    int v2 = 94;
    int v3 = 31;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v2;
    }
    if (v1 > v3) { v1 = v3; }
    v2 = __helper(v2);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
