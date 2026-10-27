int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 52;
    int v2 = 60;
    int v3 = 30;
    int v4 = 39;
    int v5 = 98;
    int v6 = 48;
    int v7 = 48;
    int i;
    v0 = v0 * 10;
    if (v0 > v6) { v0 = v6; }
    v6 = v6 - v4;
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
