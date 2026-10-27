int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9625[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 24;
    int v2 = 11;
    int v3 = 97;
    int i;
    v2 = v2 + v1;
    for (i = 0; i < 10; i++) { __arr_9625[i] = v1 + i; }
    v3 = __helper(v3);
    v0 = v0 | v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
