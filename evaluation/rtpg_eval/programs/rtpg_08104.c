int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8104[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 21;
    int v2 = 94;
    int v3 = 15;
    int v4 = 73;
    int v5 = 26;
    int v6 = 54;
    int i;
    for (i = 0; i < 10; i++) { __arr_8104[i] = v4 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    v4 = __helper(v4);
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
