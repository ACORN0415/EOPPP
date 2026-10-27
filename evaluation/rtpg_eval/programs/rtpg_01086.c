int __arr_1086[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 53;
    int v2 = 9;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v2;
    }
    v2 = v2 + v1;
    for (i = 0; i < 10; i++) { __arr_1086[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    v2 = v2 ^ v0;
    return v0;
}
int main(void) { return test_func(); }
