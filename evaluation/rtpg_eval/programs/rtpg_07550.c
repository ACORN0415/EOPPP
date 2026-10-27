int __arr_7550[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 48;
    int v2 = 24;
    int v3 = 15;
    int v4 = 68;
    int v5 = 16;
    int v6 = 21;
    int v7 = 63;
    int i;
    for (i = 0; i < 10; i++) { __arr_7550[i] = v0 + i; }
    v1 = v1 * 7;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
