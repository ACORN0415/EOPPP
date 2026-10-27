int __arr_2065[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 88;
    int v2 = 10;
    int v3 = 15;
    int i;
    if (v1 > v2) { v1 = v2; }
    v1 = 46;
    for (i = 0; i < 10; i++) { __arr_2065[i] = v0 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
