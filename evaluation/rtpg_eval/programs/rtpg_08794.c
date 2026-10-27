int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8794[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 19;
    int v2 = 95;
    int v3 = 13;
    int v4 = 51;
    int v5 = 79;
    int v6 = 49;
    int v7 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_8794[i] = v5 + i; }
    for (i = 0; i < 16; i++) {
        v4 = v4 + v4;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v0 = __helper(v0);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
