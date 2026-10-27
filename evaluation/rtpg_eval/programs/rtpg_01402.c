int __arr_1402[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 34;
    int v2 = 44;
    int v3 = 80;
    int v4 = 72;
    int v5 = 7;
    int i;
    for (i = 0; i < 6; i++) {
        v5 = v5 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_1402[i] = v4 + i; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
