int test_func(void) {
    int v0 = 71;
    int v1 = 54;
    int v2 = 16;
    int v3 = 31;
    int v4 = 91;
    int v5 = 55;
    int v6 = 42;
    int v7 = 50;
    int i;
    v0 = v0 + v7;
    v5 = v5 * 6;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
