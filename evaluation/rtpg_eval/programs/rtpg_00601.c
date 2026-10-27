int test_func(void) {
    int v0 = 16;
    int v1 = 73;
    int v2 = 71;
    int v3 = 0;
    int v4 = 38;
    int v5 = 25;
    int i;
    v3 = v3 - v2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
