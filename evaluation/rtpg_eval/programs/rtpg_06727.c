int __arr_6727[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 24;
    int v2 = 50;
    int v3 = 86;
    int v4 = 66;
    int v5 = 59;
    int i;
    v5 = v5 * 7;
    for (i = 0; i < 10; i++) { __arr_6727[i] = v1 + i; }
    for (i = 0; i < 14; i++) {
        v5 = v5 + v5;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
