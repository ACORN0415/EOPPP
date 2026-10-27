int __arr_1978[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 52;
    int v2 = 66;
    int v3 = 50;
    int v4 = 18;
    int v5 = 14;
    int v6 = 26;
    int i;
    for (i = 0; i < 10; i++) { __arr_1978[i] = v3 + i; }
    v6 = v6 - v2;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
