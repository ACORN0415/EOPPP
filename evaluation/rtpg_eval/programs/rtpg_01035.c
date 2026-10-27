int __arr_1035[10];
int test_func(void) {
    int v0 = 89;
    int v1 = 60;
    int v2 = 39;
    int v3 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_1035[i] = v0 + i; }
    v3 = 81;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v3; __s.b = v3 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
