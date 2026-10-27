int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 59;
    int v1 = 65;
    int v2 = 58;
    int v3 = 60;
    int v4 = 10;
    int i;
    v2 = v2 + v4;
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
