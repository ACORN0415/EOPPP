int __arr_1698[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 54;
    int v2 = 48;
    int v3 = 8;
    int v4 = 48;
    int v5 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_1698[i] = v1 + i; }
    v1 = 45;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
