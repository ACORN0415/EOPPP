int __arr_5598[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 5;
    int v2 = 45;
    int v3 = 78;
    int v4 = 93;
    int v5 = 63;
    int v6 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_5598[i] = v4 + i; }
    v0 = 10;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v2 = __arr_didx[__idx_didx[0]];
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
