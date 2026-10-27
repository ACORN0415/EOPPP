int test_func(void) {
    int v0 = 78;
    int v1 = 68;
    int v2 = 57;
    int v3 = 2;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
