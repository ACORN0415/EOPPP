int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 68;
    int v1 = 29;
    int v2 = 86;
    int v3 = 80;
    int v4 = 99;
    int v5 = 61;
    int v6 = 57;
    int v7 = 21;
    int i;
    v2 = v2 - v0;
    if (v5 > v1) { v5 = v1; }
    v4 = 34;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v7; __s.b = v7 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
