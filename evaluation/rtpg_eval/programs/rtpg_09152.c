int test_func(void) {
    int v0 = 2;
    int v1 = 85;
    int v2 = 75;
    int v3 = 99;
    int v4 = 74;
    int v5 = 60;
    int i;
    v1 = v1 - v3;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
