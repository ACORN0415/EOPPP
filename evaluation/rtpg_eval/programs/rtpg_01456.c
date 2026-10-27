int test_func(void) {
    int v0 = 91;
    int v1 = 74;
    int v2 = 75;
    int v3 = 54;
    int v4 = 33;
    int v5 = 96;
    int i;
    v5 = 20;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
