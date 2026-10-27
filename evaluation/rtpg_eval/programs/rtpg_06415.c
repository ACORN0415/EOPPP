int test_func(void) {
    int v0 = 10;
    int v1 = 70;
    int v2 = 92;
    int v3 = 20;
    int i;
    v2 = v2 + v1;
    v1 = v1 - v3;
    v3 = v3 / (v2 + 1);
    int *__p = &v1;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v2; __s.b = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
