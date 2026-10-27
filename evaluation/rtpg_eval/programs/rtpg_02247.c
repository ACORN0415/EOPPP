int test_func(void) {
    int v0 = 93;
    int v1 = 83;
    int v2 = 83;
    int v3 = 11;
    int v4 = 81;
    int v5 = 69;
    int v6 = 66;
    int v7 = 44;
    int i;
    v5 = v5 - v4;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
