int test_func(void) {
    int v0 = 75;
    int v1 = 70;
    int v2 = 98;
    int v3 = 40;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v0;
    }
    v3 = v3 * 8;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    return v0;
}
int main(void) { return test_func(); }
