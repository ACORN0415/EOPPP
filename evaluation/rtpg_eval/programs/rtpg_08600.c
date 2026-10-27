int __arr_8600[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 4;
    int v2 = 7;
    int v3 = 56;
    int v4 = 42;
    int v5 = 72;
    int i;
    for (i = 0; i < 10; i++) { __arr_8600[i] = v2 + i; }
    for (i = 0; i < 6; i++) {
        v1 = v1 + v0;
    }
    v1 = v1 & v3;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
