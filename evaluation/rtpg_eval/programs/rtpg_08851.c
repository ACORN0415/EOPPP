int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 37;
    int v1 = 67;
    int v2 = 77;
    int v3 = 79;
    int v4 = 26;
    int v5 = 92;
    int v6 = 72;
    int v7 = 10;
    int i;
    v7 = v7 - v3;
    v7 = v7 * 6;
    v7 = __helper(v7);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v3 = v3 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
