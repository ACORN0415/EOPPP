int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_570[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 94;
    int v2 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_570[i] = v2 + i; }
    for (i = 0; i < 15; i++) {
        v0 = v0 + v0;
    }
    v0 = __helper(v0);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v0 = v0 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
