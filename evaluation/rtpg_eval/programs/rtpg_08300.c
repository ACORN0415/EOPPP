int __arr_8300[10];
int test_func(void) {
    int v0 = 86;
    int v1 = 11;
    int v2 = 22;
    int v3 = 6;
    int v4 = 31;
    int i;
    for (i = 0; i < 10; i++) { __arr_8300[i] = v3 + i; }
    v1 = v1 - v3;
    v0 = 99;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
