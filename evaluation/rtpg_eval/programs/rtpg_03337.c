int test_func(void) {
    int v0 = 89;
    int v1 = 14;
    int v2 = 7;
    int v3 = 25;
    int v4 = 31;
    int v5 = 21;
    int i;
    for (i = 0; i < 18; i++) {
        v0 = v0 + v5;
    }
    if (v4 > v1) { v4 = v1; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
