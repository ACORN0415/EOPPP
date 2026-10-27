int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3431[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 9;
    int v2 = 83;
    int v3 = 89;
    int v4 = 34;
    int v5 = 56;
    int i;
    for (i = 0; i < 10; i++) { __arr_3431[i] = v1 + i; }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v4 = v4 + 1; }
      } }
    v5 = __helper(v5);
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    return v0;
}
int main(void) { return test_func(); }
