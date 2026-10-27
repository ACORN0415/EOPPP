int test_func(void) {
    int v0 = 80;
    int v1 = 40;
    int v2 = 41;
    int v3 = 19;
    int i;
    v2 = 49;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = v2 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
