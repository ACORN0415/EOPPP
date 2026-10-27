int test_func(void) {
    int v0 = 75;
    int v1 = 88;
    int v2 = 38;
    int v3 = 66;
    int v4 = 60;
    int v5 = 60;
    int i;
    v2 = v2 * 2;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
