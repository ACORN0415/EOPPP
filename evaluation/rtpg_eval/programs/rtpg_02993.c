int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 67;
    int v1 = 99;
    int v2 = 52;
    int v3 = 9;
    int v4 = 35;
    int v5 = 83;
    int v6 = 10;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v1;
    }
    if (v1 > v0) { v1 = v0; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
