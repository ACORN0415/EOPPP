int test_func(void) {
    int v0 = 65;
    int v1 = 89;
    int v2 = 69;
    int v3 = 41;
    int v4 = 10;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v1;
    }
    v2 = v2 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
