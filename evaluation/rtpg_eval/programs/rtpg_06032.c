int __arr_6032[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 93;
    int v2 = 43;
    int v3 = 75;
    int v4 = 93;
    int v5 = 34;
    int v6 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_6032[i] = v4 + i; }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
