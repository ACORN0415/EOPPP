int test_func(void) {
    int v0 = 21;
    int v1 = 59;
    int v2 = 97;
    int v3 = 87;
    int i;
    v2 = v2 - v3;
    v0 = v0 + v0;
    if (v3 > v1) { v3 = v1; }
    int *__p = &v1;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
