int test_func(void) {
    int v0 = 64;
    int v1 = 83;
    int v2 = 74;
    int v3 = 20;
    int v4 = 31;
    int v5 = 58;
    int v6 = 40;
    int v7 = 6;
    int i;
    for (i = 0; i < 11; i++) {
        v7 = v7 + v6;
    }
    v0 = v0 * 6;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v6 = v6 | v3;
    return v0;
}
int main(void) { return test_func(); }
