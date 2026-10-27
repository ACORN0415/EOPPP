int __arr_781[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 36;
    int v2 = 71;
    int v3 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_781[i] = v1 + i; }
    v0 = 35;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v2;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
