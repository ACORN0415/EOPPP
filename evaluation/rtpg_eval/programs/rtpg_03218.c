int __arr_3218[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 8;
    int v2 = 11;
    int v3 = 98;
    int v4 = 3;
    int v5 = 90;
    int i;
    v5 = v5 + v2;
    for (i = 0; i < 10; i++) { __arr_3218[i] = v0 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v3;
    *__p = *__p + 1;
    struct __S { int a; int b; };
    struct __S __s; __s.a = v5; __s.b = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
