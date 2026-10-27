int test_func(void) {
    int v0 = 12;
    int v1 = 46;
    int v2 = 26;
    int v3 = 1;
    int v4 = 68;
    int v5 = 9;
    int v6 = 0;
    int v7 = 52;
    int i;
    v1 = v1 * 2;
    v3 = v3 + v5;
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
