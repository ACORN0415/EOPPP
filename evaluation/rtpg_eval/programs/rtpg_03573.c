int test_func(void) {
    int v0 = 13;
    int v1 = 75;
    int v2 = 44;
    int v3 = 21;
    int i;
    v0 = v0 + v3;
    v2 = v2 * 8;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
