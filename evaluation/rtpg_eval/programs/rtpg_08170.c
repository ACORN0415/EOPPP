int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 38;
    int v1 = 68;
    int v2 = 81;
    int i;
    if (v1 > v1) { v1 = v1; }
    v2 = v2 * 6;
    v2 = v2 + v0;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v0 = __helper(v0);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v2 = v2 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
