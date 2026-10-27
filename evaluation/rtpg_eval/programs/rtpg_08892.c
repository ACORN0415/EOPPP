int test_func(void) {
    int v0 = 68;
    int v1 = 38;
    int v2 = 62;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v1;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 | v0;
    return v0;
}
int main(void) { return test_func(); }
