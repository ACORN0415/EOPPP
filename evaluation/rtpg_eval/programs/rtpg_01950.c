int test_func(void) {
    int v0 = 57;
    int v1 = 6;
    int v2 = 90;
    int v3 = 31;
    int i;
    v2 = 55;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
