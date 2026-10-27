int test_func(void) {
    int v0 = 90;
    int v1 = 15;
    int v2 = 60;
    int v3 = 53;
    int v4 = 11;
    int v5 = 52;
    int i;
    for (i = 0; i < 18; i++) {
        v4 = v4 + v3;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
