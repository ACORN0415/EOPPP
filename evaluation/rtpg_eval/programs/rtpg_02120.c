int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 17;
    int v1 = 3;
    int v2 = 60;
    int v3 = 79;
    int v4 = 55;
    int v5 = 12;
    int v6 = 66;
    int i;
    v3 = v3 + v6;
    v3 = v3 - v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
