int test_func(void) {
    int v0 = 89;
    int v1 = 46;
    int v2 = 55;
    int v3 = 87;
    int v4 = 58;
    int v5 = 80;
    int i;
    v5 = 7;
    v5 = v5 + v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
