int test_func(void) {
    int v0 = 97;
    int v1 = 9;
    int v2 = 49;
    int v3 = 66;
    int v4 = 14;
    int v5 = 17;
    int v6 = 50;
    int v7 = 67;
    int i;
    v2 = v2 - v4;
    v2 = 58;
    v7 = v7 * 5;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
