int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 78;
    int v1 = 44;
    int v2 = 1;
    int v3 = 12;
    int i;
    if (v3 > v1) { v3 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
