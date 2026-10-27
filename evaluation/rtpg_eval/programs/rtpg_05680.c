int test_func(void) {
    int v0 = 41;
    int v1 = 77;
    int v2 = 45;
    int v3 = 30;
    int v4 = 30;
    int i;
    if (v4 > v4) { v4 = v4; }
    v1 = 83;
    int *__p = &v0;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v4 = v4 | v0;
    return v0;
}
int main(void) { return test_func(); }
