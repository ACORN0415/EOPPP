int test_func(void) {
    int v0 = 92;
    int v1 = 33;
    int v2 = 96;
    int v3 = 30;
    int v4 = 68;
    int i;
    v1 = v1 * 7;
    v2 = v2 - v3;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
