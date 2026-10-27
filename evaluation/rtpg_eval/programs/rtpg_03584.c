int test_func(void) {
    int v0 = 82;
    int v1 = 0;
    int v2 = 57;
    int v3 = 14;
    int v4 = 9;
    int v5 = 3;
    int v6 = 72;
    int i;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
