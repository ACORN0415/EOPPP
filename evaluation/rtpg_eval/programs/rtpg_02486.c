int __arr_2486[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 76;
    int v2 = 7;
    int v3 = 78;
    int v4 = 26;
    int v5 = 43;
    int v6 = 13;
    int v7 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_2486[i] = v2 + i; }
    v1 = v1 - v7;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
