int test_func(void) {
    int v0 = 16;
    int v1 = 4;
    int v2 = 72;
    int i;
    v1 = v1 - v2;
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
