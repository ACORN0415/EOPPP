int test_func(void) {
    int v0 = 48;
    int v1 = 96;
    int v2 = 58;
    int v3 = 4;
    int v4 = 60;
    int v5 = 46;
    int v6 = 34;
    int i;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v6;
    }
    v5 = v5 - v4;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
