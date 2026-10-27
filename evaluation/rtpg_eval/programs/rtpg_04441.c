int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 85;
    int v1 = 88;
    int v2 = 78;
    int v3 = 34;
    int v4 = 24;
    int v5 = 9;
    int i;
    v2 = v2 * 5;
    v1 = v1 - v5;
    v1 = __helper(v1);
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
