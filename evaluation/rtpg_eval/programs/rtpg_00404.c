int test_func(void) {
    int v0 = 49;
    int v1 = 99;
    int v2 = 83;
    int v3 = 6;
    int i;
    v2 = v2 * 5;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
