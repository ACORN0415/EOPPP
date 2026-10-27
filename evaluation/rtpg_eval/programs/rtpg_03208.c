int __arr_3208[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 83;
    int v2 = 2;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_3208[i] = v1 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
