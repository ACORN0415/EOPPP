int __arr_5808[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 30;
    int v2 = 58;
    int v3 = 35;
    int v4 = 86;
    int v5 = 98;
    int v6 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_5808[i] = v4 + i; }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
