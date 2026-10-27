int test_func(void) {
    int v0 = 11;
    int v1 = 18;
    int v2 = 3;
    int v3 = 71;
    int i;
    v0 = v0 * 9;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
