int __arr_8786[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 46;
    int v2 = 35;
    int v3 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_8786[i] = v2 + i; }
    v1 = v1 + v2;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v3;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
