int __arr_3392[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 70;
    int v2 = 34;
    int v3 = 57;
    int v4 = 34;
    int v5 = 39;
    int v6 = 37;
    int v7 = 32;
    int i;
    v3 = v3 * 6;
    for (i = 0; i < 10; i++) { __arr_3392[i] = v1 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
