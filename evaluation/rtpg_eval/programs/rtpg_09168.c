int test_func(void) {
    int v0 = 62;
    int v1 = 94;
    int v2 = 44;
    int v3 = 17;
    int v4 = 100;
    int v5 = 2;
    int v6 = 45;
    int i;
    v4 = v4 + v2;
    v6 = v6 * 8;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
