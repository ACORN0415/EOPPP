int __arr_6940[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 14;
    int v2 = 53;
    int v3 = 52;
    int v4 = 58;
    int v5 = 32;
    int i;
    v5 = v5 + v3;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_6940[i] = v4 + i; }
    int *__p = &v4;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
