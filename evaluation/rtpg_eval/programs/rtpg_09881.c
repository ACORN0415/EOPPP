int test_func(void) {
    int v0 = 36;
    int v1 = 0;
    int v2 = 31;
    int v3 = 0;
    int i;
    v3 = v3 + v3;
    v2 = v2 * 6;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
