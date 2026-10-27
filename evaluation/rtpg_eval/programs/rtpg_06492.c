int __arr_6492[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 35;
    int v2 = 86;
    int v3 = 39;
    int v4 = 89;
    int v5 = 74;
    int v6 = 27;
    int v7 = 63;
    int i;
    v1 = v1 - v4;
    for (i = 0; i < 10; i++) { __arr_6492[i] = v1 + i; }
    for (i = 0; i < 20; i++) {
        v2 = v2 + v0;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v3 = v3 | v4;
    return v0;
}
int main(void) { return test_func(); }
