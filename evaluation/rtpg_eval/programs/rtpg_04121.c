int __arr_4121[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 9;
    int v2 = 69;
    int v3 = 42;
    int v4 = 2;
    int v5 = 87;
    int v6 = 21;
    int v7 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_4121[i] = v6 + i; }
    v7 = v7 + v2;
    v4 = v4 - v1;
    int *__p = &v3;
    *__p = *__p + 1;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
