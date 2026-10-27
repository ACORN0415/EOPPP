int __arr_8917[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 54;
    int v2 = 55;
    int i;
    for (i = 0; i < 10; i++) { __arr_8917[i] = v0 + i; }
    v0 = 51;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
