int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 29;
    int v1 = 0;
    int v2 = 41;
    int v3 = 78;
    int v4 = 8;
    int v5 = 50;
    int v6 = 40;
    int i;
    v6 = 24;
    v2 = v2 * 8;
    v6 = __helper(v6);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v6 = v6 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
