int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8707[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 54;
    int v2 = 69;
    int i;
    for (i = 0; i < 10; i++) { __arr_8707[i] = v2 + i; }
    v1 = __helper(v1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
