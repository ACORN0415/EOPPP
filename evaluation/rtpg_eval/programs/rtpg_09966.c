int test_func(void) {
    int v0 = 80;
    int v1 = 36;
    int v2 = 19;
    int v3 = 52;
    int v4 = 87;
    int v5 = 99;
    int v6 = 68;
    int v7 = 80;
    int i;
    for (i = 0; i < 19; i++) {
        v6 = v6 + v3;
    }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
