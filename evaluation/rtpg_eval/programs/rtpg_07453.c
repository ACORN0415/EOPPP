int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 43;
    int v2 = 70;
    int v3 = 20;
    int v4 = 66;
    int v5 = 87;
    int i;
    for (i = 0; i < 18; i++) {
        v2 = v2 + v3;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v1 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
