int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 3;
    int v2 = 96;
    int v3 = 36;
    int v4 = 68;
    int v5 = 64;
    int v6 = 45;
    int v7 = 14;
    int i;
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 8; i++) {
        v6 = v6 + v6;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v4 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
