int test_func(void) {
    int v0 = 77;
    int v1 = 82;
    int v2 = 6;
    int v3 = 80;
    int v4 = 39;
    int v5 = 19;
    int v6 = 67;
    int v7 = 78;
    int i;
    v6 = v6 * 9;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
