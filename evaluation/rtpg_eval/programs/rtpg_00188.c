int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 25;
    int v2 = 79;
    int v3 = 10;
    int v4 = 90;
    int v5 = 56;
    int v6 = 95;
    int v7 = 78;
    int i;
    v7 = v7 * 8;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    v7 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
