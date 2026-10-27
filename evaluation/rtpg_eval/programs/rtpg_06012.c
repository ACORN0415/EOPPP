int test_func(void) {
    int v0 = 80;
    int v1 = 46;
    int v2 = 38;
    int v3 = 53;
    int v4 = 95;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 7; i++) {
        v3 = v3 + v0;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
