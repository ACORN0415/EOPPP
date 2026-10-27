int test_func(void) {
    int v0 = 4;
    int v1 = 73;
    int v2 = 88;
    int v3 = 86;
    int v4 = 59;
    int v5 = 94;
    int v6 = 55;
    int i;
    v4 = v4 - v1;
    v0 = v0 + v1;
    if (v6 > v3) { v6 = v3; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
