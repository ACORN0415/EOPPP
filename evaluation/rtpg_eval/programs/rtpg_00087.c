int test_func(void) {
    int v0 = 30;
    int v1 = 41;
    int v2 = 1;
    int v3 = 49;
    int v4 = 40;
    int v5 = 28;
    int v6 = 37;
    int v7 = 11;
    int i;
    if (v7 > v2) { v7 = v2; }
    v1 = v1 * 5;
    v1 = v1 & v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
