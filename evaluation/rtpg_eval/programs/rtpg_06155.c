int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6155[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 19;
    int v2 = 26;
    int v3 = 84;
    int v4 = 3;
    int v5 = 44;
    int v6 = 40;
    int v7 = 100;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v3;
    }
    v5 = 12;
    for (i = 0; i < 10; i++) { __arr_6155[i] = v4 + i; }
    v7 = __helper(v7);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    { int __j;
      for (i = 0; i < 5; i++) {
          for (__j = 0; __j < 5; __j++) { v5 = v5 + 1; }
      } }
    return v0;
}
int main(void) { return test_func(); }
