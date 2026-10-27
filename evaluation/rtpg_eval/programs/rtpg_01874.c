int __arr_1874[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 42;
    int v2 = 71;
    int v3 = 95;
    int i;
    for (i = 0; i < 10; i++) { __arr_1874[i] = v3 + i; }
    v3 = v3 - v1;
    v2 = v2 * 6;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
