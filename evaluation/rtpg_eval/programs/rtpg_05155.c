int test_func(void) {
    int v0 = 75;
    int v1 = 100;
    int v2 = 94;
    int v3 = 37;
    int v4 = 34;
    int v5 = 35;
    int i;
    v3 = v3 * 8;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v5;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v3;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
