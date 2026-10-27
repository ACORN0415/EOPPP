int __arr_3223[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 54;
    int v2 = 26;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_3223[i] = v2 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
