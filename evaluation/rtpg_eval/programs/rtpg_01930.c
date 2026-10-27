int test_func(void) {
    int v0 = 2;
    int v1 = 91;
    int v2 = 37;
    int v3 = 55;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v2;
    }
    if (v3 > v2) { v3 = v2; }
    v2 = v2 % (v1 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    return v0;
}
int main(void) { return test_func(); }
