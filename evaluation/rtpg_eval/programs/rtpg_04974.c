int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 74;
    int v1 = 58;
    int v2 = 36;
    int v3 = 1;
    int v4 = 29;
    int i;
    v0 = v0 * 4;
    if (v2 > v0) { v2 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
