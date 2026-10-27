int __arr_2507[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 49;
    int v2 = 78;
    int v3 = 59;
    int v4 = 92;
    int v5 = 5;
    int i;
    v4 = v4 - v3;
    for (i = 0; i < 10; i++) { __arr_2507[i] = v1 + i; }
    v2 = v2 + v4;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
