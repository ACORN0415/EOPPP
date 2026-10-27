int __arr_1344[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 91;
    int v2 = 51;
    int v3 = 96;
    int v4 = 49;
    int i;
    for (i = 0; i < 10; i++) { __arr_1344[i] = v0 + i; }
    for (i = 0; i < 19; i++) {
        v1 = v1 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
