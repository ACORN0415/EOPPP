int test_func(void) {
    int v0 = 76;
    int v1 = 69;
    int v2 = 75;
    int v3 = 93;
    int v4 = 18;
    int v5 = 8;
    int i;
    v1 = v1 + v4;
    v4 = v4 * 4;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
