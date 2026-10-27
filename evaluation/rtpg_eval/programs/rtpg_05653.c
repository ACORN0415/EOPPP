int test_func(void) {
    int v0 = 30;
    int v1 = 96;
    int v2 = 50;
    int v3 = 19;
    int i;
    v1 = 61;
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = v2 % (v0 + 1);
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
