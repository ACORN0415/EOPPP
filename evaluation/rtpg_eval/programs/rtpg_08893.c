int __arr_8893[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 70;
    int v2 = 15;
    int v3 = 99;
    int v4 = 41;
    int i;
    v1 = v1 + v2;
    for (i = 0; i < 10; i++) { __arr_8893[i] = v2 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
