int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 82;
    int v2 = 7;
    int v3 = 38;
    int v4 = 33;
    int v5 = 24;
    int v6 = 88;
    int v7 = 57;
    int i;
    if (v7 > v7) { v7 = v7; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
