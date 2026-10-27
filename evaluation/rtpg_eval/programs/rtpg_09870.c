int __arr_9870[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 42;
    int v2 = 73;
    int v3 = 37;
    int v4 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_9870[i] = v2 + i; }
    v4 = 59;
    union __U { int x; float y; };
    union __U __u; __u.x = v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
