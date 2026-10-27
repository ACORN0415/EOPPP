int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 65;
    int v1 = 17;
    int v2 = 51;
    int v3 = 81;
    int v4 = 49;
    int v5 = 25;
    int i;
    v4 = v4 * 9;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    v0 = __helper(v0);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
