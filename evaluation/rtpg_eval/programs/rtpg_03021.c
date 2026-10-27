int test_func(void) {
    int v0 = 26;
    int v1 = 49;
    int v2 = 1;
    int v3 = 60;
    int v4 = 96;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v1;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
