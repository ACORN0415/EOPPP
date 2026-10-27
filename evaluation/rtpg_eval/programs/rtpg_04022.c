int test_func(void) {
    int v0 = 14;
    int v1 = 98;
    int v2 = 11;
    int v3 = 67;
    int v4 = 85;
    int v5 = 97;
    int v6 = 9;
    int v7 = 34;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v2;
    }
    v4 = v4 ^ v5;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    int *__p = &v6;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
