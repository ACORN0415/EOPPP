int test_func(void) {
    int v0 = 14;
    int v1 = 91;
    int v2 = 70;
    int v3 = 36;
    int v4 = 85;
    int v5 = 77;
    int i;
    v4 = 13;
    v5 = v5 | v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
