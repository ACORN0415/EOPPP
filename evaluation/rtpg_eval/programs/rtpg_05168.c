int __arr_5168[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 51;
    int v2 = 84;
    int v3 = 91;
    int v4 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_5168[i] = v0 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v1; __s.b = v1 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    v2 = v2 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
