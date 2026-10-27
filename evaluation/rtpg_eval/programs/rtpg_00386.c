int test_func(void) {
    int v0 = 28;
    int v1 = 77;
    int v2 = 68;
    int v3 = 28;
    int v4 = 97;
    int i;
    v3 = 32;
    v0 = v0 + v2;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
