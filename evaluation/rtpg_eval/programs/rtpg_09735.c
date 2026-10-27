int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 65;
    int v2 = 76;
    int v3 = 91;
    int v4 = 49;
    int v5 = 85;
    int i;
    if (v2 > v2) { v2 = v2; }
    for (i = 0; i < 15; i++) {
        v0 = v0 + v4;
    }
    v0 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
