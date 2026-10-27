int test_func(void) {
    int v0 = 53;
    int v1 = 57;
    int v2 = 11;
    int v3 = 20;
    int v4 = 18;
    int v5 = 75;
    int v6 = 28;
    int i;
    if (v6 > v5) { v6 = v5; }
    for (i = 0; i < 14; i++) {
        v5 = v5 + v4;
    }
    v5 = v5 * 3;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
