int __arr_3497[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 75;
    int v2 = 75;
    int v3 = 31;
    int v4 = 81;
    int i;
    if (v4 > v3) { v4 = v3; }
    for (i = 0; i < 10; i++) { __arr_3497[i] = v0 + i; }
    v3 = v3 - v1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
