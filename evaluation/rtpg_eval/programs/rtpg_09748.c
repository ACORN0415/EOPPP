int test_func(void) {
    int v0 = 11;
    int v1 = 53;
    int v2 = 38;
    int v3 = 40;
    int i;
    v1 = 8;
    v0 = v0 * 9;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
