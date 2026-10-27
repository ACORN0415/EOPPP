int test_func(void) {
    int v0 = 31;
    int v1 = 96;
    int v2 = 72;
    int v3 = 54;
    int v4 = 84;
    int v5 = 76;
    int i;
    if (v1 > v4) { v1 = v4; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
