int test_func(void) {
    int v0 = 16;
    int v1 = 50;
    int v2 = 19;
    int v3 = 82;
    int v4 = 69;
    int v5 = 93;
    int v6 = 58;
    int i;
    v4 = v4 * 5;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
