int test_func(void) {
    int v0 = 3;
    int v1 = 54;
    int v2 = 12;
    int v3 = 86;
    int v4 = 26;
    int v5 = 65;
    int v6 = 47;
    int v7 = 41;
    int i;
    v2 = v2 + v4;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v5;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
