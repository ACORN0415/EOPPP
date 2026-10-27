int test_func(void) {
    int v0 = 50;
    int v1 = 52;
    int v2 = 64;
    int i;
    v1 = 33;
    v0 = v0 * 9;
    int *__p = &v0;
    *__p = *__p + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
