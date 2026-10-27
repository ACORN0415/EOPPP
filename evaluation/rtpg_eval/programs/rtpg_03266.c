int test_func(void) {
    int v0 = 54;
    int v1 = 25;
    int v2 = 97;
    int v3 = 22;
    int i;
    v2 = v2 - v3;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v1;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
