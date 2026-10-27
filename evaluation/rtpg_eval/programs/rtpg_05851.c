int __arr_5851[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 28;
    int v2 = 5;
    int v3 = 21;
    int v4 = 52;
    int v5 = 91;
    int v6 = 8;
    int v7 = 7;
    int i;
    if (v0 > v3) { v0 = v3; }
    for (i = 0; i < 10; i++) { __arr_5851[i] = v0 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v1 = v1 / (v6 + 1);
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
