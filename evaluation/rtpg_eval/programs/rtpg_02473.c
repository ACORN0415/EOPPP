int test_func(void) {
    int v0 = 65;
    int v1 = 81;
    int v2 = 13;
    int v3 = 57;
    int v4 = 16;
    int v5 = 64;
    int i;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v3;
    }
    v2 = v2 + v1;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
