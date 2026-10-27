int test_func(void) {
    int v0 = 97;
    int v1 = 40;
    int v2 = 32;
    int v3 = 22;
    int i;
    v3 = v3 * 8;
    v0 = v0 + v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v1 = v1 | v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
