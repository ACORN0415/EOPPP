int __arr_1789[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 37;
    int v2 = 53;
    int v3 = 15;
    int v4 = 20;
    int i;
    v2 = 25;
    for (i = 0; i < 10; i++) { __arr_1789[i] = v3 + i; }
    struct __S { int a; int b; };
    struct __S __s; __s.a = v4; __s.b = v4 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = v2 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
