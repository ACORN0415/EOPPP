int __arr_7955[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 87;
    int v2 = 48;
    int v3 = 42;
    int v4 = 59;
    int v5 = 2;
    int v6 = 16;
    int i;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_7955[i] = v6 + i; }
    v6 = v6 - v1;
    union __U { int x; float y; };
    union __U __u; __u.x = v6;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
