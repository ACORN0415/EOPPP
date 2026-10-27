int test_func(void) {
    int v0 = 56;
    int v1 = 1;
    int v2 = 39;
    int v3 = 90;
    int v4 = 40;
    int v5 = 89;
    int i;
    v0 = v0 * 9;
    v3 = v3 - v4;
    if (v2 > v5) { v2 = v5; }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
