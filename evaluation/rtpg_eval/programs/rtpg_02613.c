int __arr_2613[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 23;
    int v2 = 78;
    int v3 = 35;
    int v4 = 78;
    int v5 = 60;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 10; i++) { __arr_2613[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v2 = v2 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
