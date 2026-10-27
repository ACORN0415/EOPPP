int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3572[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 60;
    int v2 = 11;
    int v3 = 98;
    int v4 = 76;
    int v5 = 37;
    int v6 = 53;
    int i;
    v4 = v4 + v0;
    for (i = 0; i < 10; i++) { __arr_3572[i] = v2 + i; }
    v5 = v5 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v6 = __helper(v6);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v0 = v0 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
