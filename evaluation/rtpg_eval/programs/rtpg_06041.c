int test_func(void) {
    int v0 = 51;
    int v1 = 67;
    int v2 = 76;
    int v3 = 31;
    int v4 = 0;
    int v5 = 96;
    int i;
    v2 = v2 * 10;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
