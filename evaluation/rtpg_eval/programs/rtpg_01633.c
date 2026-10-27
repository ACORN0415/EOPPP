int __arr_1633[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 53;
    int v2 = 10;
    int v3 = 77;
    int v4 = 13;
    int v5 = 6;
    int v6 = 63;
    int v7 = 78;
    int i;
    v7 = v7 + v0;
    for (i = 0; i < 10; i++) { __arr_1633[i] = v4 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v6 = v6 | v5;
    return v0;
}
int main(void) { return test_func(); }
