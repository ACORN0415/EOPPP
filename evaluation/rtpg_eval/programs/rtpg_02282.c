int __arr_2282[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 31;
    int v1 = 0;
    int v2 = 27;
    int v3 = 84;
    int v4 = 2;
    int v5 = 21;
    int v6 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_2282[i] = v6 + i; }
    for (i = 0; i < 19; i++) {
        v3 = v3 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v5;
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }
