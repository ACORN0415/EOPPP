int __arr_6176[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 53;
    int v2 = 100;
    int v3 = 54;
    int i;
    v3 = v3 * 9;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_6176[i] = v2 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
