int test_func(void) {
    int v0 = 56;
    int v1 = 65;
    int v2 = 89;
    int v3 = 64;
    int v4 = 66;
    int i;
    v0 = 91;
    if (v2 > v2) { v2 = v2; }
    int *__p = &v4;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
