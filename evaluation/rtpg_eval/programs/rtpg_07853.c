int test_func(void) {
    int v0 = 79;
    int v1 = 62;
    int v2 = 15;
    int v3 = 96;
    int v4 = 41;
    int v5 = 33;
    int v6 = 23;
    int v7 = 62;
    int i;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v0;
    }
    v2 = 41;
    v3 = v3 & v7;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
