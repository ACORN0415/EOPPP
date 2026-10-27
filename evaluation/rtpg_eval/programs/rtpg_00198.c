int test_func(void) {
    int v0 = 97;
    int v1 = 68;
    int v2 = 70;
    int v3 = 17;
    int v4 = 7;
    int i;
    if (v2 > v4) { v2 = v4; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v0;
    return v0;
}
int main(void) { return test_func(); }
