int test_func(void) {
    int v0 = 55;
    int v1 = 73;
    int v2 = 4;
    int v3 = 2;
    int v4 = 49;
    int v5 = 41;
    int i;
    v2 = v2 * 6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
