int test_func(void) {
    int v0 = 25;
    int v1 = 81;
    int v2 = 35;
    int v3 = 41;
    int v4 = 95;
    int i;
    if (v2 > v1) { v2 = v1; }
    v4 = v4 * 5;
    int *__p = &v3;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v0; __s.b = v0 + 1;
    v3 = v3 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
