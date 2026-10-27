int test_func(void) {
    int v0 = 83;
    int v1 = 6;
    int v2 = 22;
    int v3 = 13;
    int v4 = 37;
    int v5 = 79;
    int v6 = 76;
    int i;
    v2 = 66;
    v1 = v1 * 10;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
