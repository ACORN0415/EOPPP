int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 95;
    int v2 = 70;
    int i;
    v1 = v1 + v1;
    v0 = __arr_didx[__idx_didx[0]];
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
