int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6403[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 54;
    int v2 = 9;
    int v3 = 96;
    int v4 = 35;
    int v5 = 91;
    int v6 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_6403[i] = v4 + i; }
    v6 = v6 + v0;
    v5 = __helper(v5);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
