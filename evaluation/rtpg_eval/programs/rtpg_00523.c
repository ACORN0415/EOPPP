int test_func(void) {
    int v0 = 60;
    int v1 = 75;
    int v2 = 90;
    int v3 = 82;
    int v4 = 69;
    int i;
    v3 = v3 * 8;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v1 = v1 | v2;
    return v0;
}
int main(void) { return test_func(); }
