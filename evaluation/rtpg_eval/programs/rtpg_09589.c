int test_func(void) {
    int v0 = 23;
    int v1 = 55;
    int v2 = 72;
    int v3 = 27;
    int i;
    v3 = 65;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 5; i++) {
        v0 = v0 + v1;
    }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    v0 = v0 % (v2 + 1);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
