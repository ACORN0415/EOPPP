int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_522[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 97;
    int v2 = 4;
    int v3 = 39;
    int v4 = 79;
    int i;
    for (i = 0; i < 10; i++) { __arr_522[i] = v0 + i; }
    v2 = v2 - v3;
    if (v3 > v1) { v3 = v1; }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v1 = v1 + 1; }
      } }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
