int test_func(void) {
    int v0 = 73;
    int v1 = 61;
    int v2 = 15;
    int v3 = 71;
    int v4 = 75;
    int v5 = 9;
    int v6 = 5;
    int v7 = 80;
    int i;
    for (i = 0; i < 13; i++) {
        v6 = v6 + v1;
    }
    v2 = v2 + v4;
    v4 = v4 * 4;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
