int __arr_1229[10];
int test_func(void) {
    int v0 = 67;
    int v1 = 98;
    int v2 = 55;
    int v3 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_1229[i] = v3 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
