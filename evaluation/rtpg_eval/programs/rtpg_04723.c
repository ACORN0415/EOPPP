int test_func(void) {
    int v0 = 11;
    int v1 = 41;
    int v2 = 78;
    int v3 = 17;
    int v4 = 30;
    int v5 = 99;
    int v6 = 55;
    int i;
    v5 = v5 - v3;
    v6 = v6 * 2;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
