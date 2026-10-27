int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 2;
    int v1 = 88;
    int v2 = 76;
    int v3 = 71;
    int i;
    v0 = v0 * 4;
    if (v1 > v0) { v1 = v0; }
    v3 = 94;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v2 = __helper(v2);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
