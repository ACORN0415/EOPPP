int test_func(void) {
    int v0 = 31;
    int v1 = 99;
    int v2 = 68;
    int v3 = 1;
    int v4 = 55;
    int v5 = 7;
    int v6 = 77;
    int v7 = 71;
    int i;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
