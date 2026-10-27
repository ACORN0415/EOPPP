int test_func(void) {
    int v0 = 35;
    int v1 = 60;
    int v2 = 8;
    int v3 = 70;
    int v4 = 30;
    int v5 = 6;
    int i;
    v1 = 90;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
