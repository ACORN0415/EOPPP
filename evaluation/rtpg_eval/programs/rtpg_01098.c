int test_func(void) {
    int v0 = 13;
    int v1 = 3;
    int v2 = 93;
    int v3 = 71;
    int v4 = 22;
    int v5 = 70;
    int i;
    if (v5 > v2) { v5 = v2; }
    v3 = v3 * 3;
    v5 = v5 - v4;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
