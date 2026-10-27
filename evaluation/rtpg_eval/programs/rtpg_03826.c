int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 92;
    int v1 = 36;
    int v2 = 49;
    int v3 = 24;
    int v4 = 88;
    int i;
    v3 = v3 * 10;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
