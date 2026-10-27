int __arr_1462[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 40;
    int v2 = 25;
    int v3 = 34;
    int v4 = 13;
    int i;
    v2 = v2 - v4;
    for (i = 0; i < 10; i++) { __arr_1462[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
