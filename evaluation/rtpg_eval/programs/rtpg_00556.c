int test_func(void) {
    int v0 = 58;
    int v1 = 26;
    int v2 = 11;
    int v3 = 66;
    int v4 = 48;
    int v5 = 2;
    int v6 = 87;
    int v7 = 19;
    int i;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v2;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
