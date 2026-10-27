int __arr_4889[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 28;
    int v2 = 78;
    int v3 = 83;
    int v4 = 48;
    int v5 = 3;
    int v6 = 98;
    int v7 = 9;
    int i;
    for (i = 0; i < 10; i++) { __arr_4889[i] = v6 + i; }
    for (i = 0; i < 17; i++) {
        v2 = v2 + v1;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
