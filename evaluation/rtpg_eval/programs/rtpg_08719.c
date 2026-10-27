int test_func(void) {
    int v0 = 17;
    int v1 = 93;
    int v2 = 14;
    int v3 = 32;
    int v4 = 84;
    int v5 = 9;
    int v6 = 44;
    int i;
    v6 = v6 * 6;
    if (v5 > v3) { v5 = v3; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
