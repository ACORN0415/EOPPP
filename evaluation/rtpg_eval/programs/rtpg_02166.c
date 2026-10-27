int __arr_2166[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 13;
    int v2 = 90;
    int v3 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_2166[i] = v1 + i; }
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
