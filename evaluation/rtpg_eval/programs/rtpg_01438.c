int test_func(void) {
    int v0 = 13;
    int v1 = 42;
    int v2 = 26;
    int v3 = 52;
    int v4 = 68;
    int v5 = 93;
    int v6 = 3;
    int i;
    v2 = v2 * 7;
    if (v6 > v6) { v6 = v6; }
    v5 = v5 - v6;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
