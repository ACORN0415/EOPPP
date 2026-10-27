int test_func(void) {
    int v0 = 80;
    int v1 = 41;
    int v2 = 67;
    int v3 = 87;
    int v4 = 24;
    int i;
    v1 = v1 - v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
