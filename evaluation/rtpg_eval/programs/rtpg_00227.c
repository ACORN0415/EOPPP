int test_func(void) {
    int v0 = 9;
    int v1 = 49;
    int v2 = 14;
    int v3 = 56;
    int v4 = 82;
    int v5 = 72;
    int v6 = 47;
    int v7 = 7;
    int i;
    v6 = v6 + v5;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
