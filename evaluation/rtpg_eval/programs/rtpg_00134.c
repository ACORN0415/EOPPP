int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 72;
    int v1 = 47;
    int v2 = 0;
    int v3 = 40;
    int v4 = 77;
    int i;
    v2 = v2 - v4;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v4;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
