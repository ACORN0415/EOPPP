int __arr_6465[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 20;
    int v2 = 87;
    int v3 = 7;
    int v4 = 81;
    int v5 = 5;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_6465[i] = v1 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
