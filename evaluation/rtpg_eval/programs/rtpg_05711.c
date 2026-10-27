int __arr_5711[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 54;
    int v2 = 97;
    int v3 = 46;
    int v4 = 19;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_5711[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
