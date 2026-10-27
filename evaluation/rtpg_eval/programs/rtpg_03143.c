int test_func(void) {
    int v0 = 83;
    int v1 = 48;
    int v2 = 95;
    int v3 = 79;
    int v4 = 17;
    int v5 = 78;
    int v6 = 27;
    int v7 = 75;
    int i;
    v4 = v4 * 4;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
