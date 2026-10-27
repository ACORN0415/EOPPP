int __arr_6214[10];
int test_func(void) {
    int v0 = 56;
    int v1 = 33;
    int v2 = 51;
    int v3 = 72;
    int v4 = 71;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v3;
    }
    v0 = 11;
    for (i = 0; i < 10; i++) { __arr_6214[i] = v0 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
