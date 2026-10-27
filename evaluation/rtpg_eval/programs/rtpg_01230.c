int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 18;
    int v2 = 7;
    int v3 = 99;
    int v4 = 56;
    int v5 = 54;
    int i;
    v3 = 67;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
