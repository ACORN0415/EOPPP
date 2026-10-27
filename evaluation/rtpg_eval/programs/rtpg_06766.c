int __arr_6766[10];
int test_func(void) {
    int v0 = 61;
    int v1 = 81;
    int v2 = 76;
    int v3 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_6766[i] = v3 + i; }
    v3 = 88;
    v3 = v3 * 9;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    union __U { int x; float y; };
    union __U __u; __u.x = v3;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
