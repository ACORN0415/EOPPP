int test_func(void) {
    int v0 = 76;
    int v1 = 99;
    int v2 = 78;
    int v3 = 93;
    int v4 = 91;
    int v5 = 75;
    int i;
    if (v5 > v4) { v5 = v4; }
    v4 = v4 - v1;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
