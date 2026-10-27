int test_func(void) {
    int v0 = 72;
    int v1 = 22;
    int v2 = 73;
    int v3 = 71;
    int v4 = 1;
    int v5 = 89;
    int v6 = 98;
    int i;
    for (i = 0; i < 5; i++) {
        v4 = v4 + v5;
    }
    v5 = 11;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
