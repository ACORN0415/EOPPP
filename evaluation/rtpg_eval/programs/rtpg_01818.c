int test_func(void) {
    int v0 = 66;
    int v1 = 0;
    int v2 = 74;
    int v3 = 4;
    int v4 = 52;
    int v5 = 46;
    int i;
    if (v4 > v3) { v4 = v3; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
