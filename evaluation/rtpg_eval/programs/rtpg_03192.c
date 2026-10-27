int __arr_3192[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 19;
    int v2 = 74;
    int v3 = 19;
    int v4 = 45;
    int i;
    for (i = 0; i < 10; i++) { __arr_3192[i] = v4 + i; }
    v0 = v0 * 2;
    if (v1 > v3) { v1 = v3; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
