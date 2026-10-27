int test_func(void) {
    int v0 = 54;
    int v1 = 92;
    int v2 = 85;
    int v3 = 56;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v3;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    v0 = v0 / (v3 + 1);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
