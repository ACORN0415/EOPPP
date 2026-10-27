int __arr_1540[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 37;
    int v2 = 10;
    int v3 = 23;
    int v4 = 35;
    int v5 = 84;
    int v6 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_1540[i] = v3 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
