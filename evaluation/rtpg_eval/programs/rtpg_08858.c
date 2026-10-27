int __arr_8858[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 23;
    int v2 = 0;
    int v3 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_8858[i] = v0 + i; }
    v2 = v2 * 6;
    int *__p = &v0;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
