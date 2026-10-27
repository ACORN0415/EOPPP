int test_func(void) {
    int v0 = 90;
    int v1 = 40;
    int v2 = 82;
    int v3 = 83;
    int i;
    v2 = v2 * 7;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
