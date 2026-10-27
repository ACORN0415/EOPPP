int test_func(void) {
    int v0 = 7;
    int v1 = 92;
    int v2 = 38;
    int v3 = 61;
    int v4 = 52;
    int i;
    v0 = 92;
    v3 = v3 + v2;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v4;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
