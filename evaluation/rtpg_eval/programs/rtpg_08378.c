int test_func(void) {
    int v0 = 20;
    int v1 = 42;
    int v2 = 40;
    int v3 = 28;
    int v4 = 59;
    int v5 = 26;
    int v6 = 27;
    int v7 = 72;
    int i;
    v7 = v7 * 7;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
