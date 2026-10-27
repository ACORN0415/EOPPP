int test_func(void) {
    int v0 = 33;
    int v1 = 3;
    int v2 = 100;
    int v3 = 29;
    int v4 = 77;
    int v5 = 0;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v2;
    }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
