int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5578[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 14;
    int v2 = 44;
    int v3 = 86;
    int v4 = 91;
    int v5 = 11;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 10; i++) { __arr_5578[i] = v0 + i; }
    v3 = v3 - v0;
    int *__p = &v2;
    *__p = *__p + 1;
    v4 = __helper(v4);
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
