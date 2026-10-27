int test_func(void) {
    int v0 = 28;
    int v1 = 70;
    int v2 = 12;
    int i;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v0;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
