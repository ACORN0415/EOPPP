int test_func(void) {
    int v0 = 50;
    int v1 = 45;
    int v2 = 96;
    int v3 = 24;
    int v4 = 39;
    int v5 = 34;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v2;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
