int test_func(void) {
    int v0 = 48;
    int v1 = 26;
    int v2 = 88;
    int v3 = 89;
    int v4 = 45;
    int v5 = 49;
    int v6 = 67;
    int v7 = 83;
    int i;
    v3 = v3 + v3;
    v2 = v2 * 9;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
