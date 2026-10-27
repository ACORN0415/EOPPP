int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 59;
    int v1 = 98;
    int v2 = 59;
    int v3 = 92;
    int v4 = 7;
    int i;
    if (v3 > v3) { v3 = v3; }
    v4 = 77;
    v2 = v2 - v3;
    v4 = __helper(v4);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
