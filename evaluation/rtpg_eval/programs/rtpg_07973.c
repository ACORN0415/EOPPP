int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 85;
    int v2 = 48;
    int v3 = 2;
    int v4 = 99;
    int v5 = 74;
    int v6 = 58;
    int i;
    v4 = 7;
    v6 = v6 - v4;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v3 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
