int __arr_7697[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 95;
    int v2 = 14;
    int v3 = 56;
    int v4 = 65;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 10; i++) { __arr_7697[i] = v1 + i; }
    v2 = 39;
    int *__p = &v3;
    *__p = *__p + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
