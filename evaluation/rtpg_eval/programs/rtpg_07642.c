int __arr_7642[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 83;
    int v2 = 98;
    int v3 = 13;
    int v4 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_7642[i] = v4 + i; }
    v4 = v4 - v0;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    union __U { int x; float y; };
    union __U __u; __u.x = v4;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
