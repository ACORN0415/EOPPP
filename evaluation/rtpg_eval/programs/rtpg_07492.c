int __arr_7492[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 58;
    int v2 = 68;
    int v3 = 73;
    int v4 = 7;
    int i;
    if (v4 > v2) { v4 = v2; }
    v1 = v1 * 4;
    for (i = 0; i < 10; i++) { __arr_7492[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
