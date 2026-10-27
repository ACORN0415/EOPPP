int test_func(void) {
    int v0 = 15;
    int v1 = 69;
    int v2 = 11;
    int v3 = 46;
    int v4 = 17;
    int v5 = 40;
    int v6 = 93;
    int v7 = 54;
    int i;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
