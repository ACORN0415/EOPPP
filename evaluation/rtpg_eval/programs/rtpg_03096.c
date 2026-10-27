int __arr_3096[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 8;
    int v2 = 5;
    int v3 = 89;
    int v4 = 81;
    int v5 = 34;
    int i;
    for (i = 0; i < 10; i++) { __arr_3096[i] = v5 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    return v0;
}
int main(void) { return test_func(); }
