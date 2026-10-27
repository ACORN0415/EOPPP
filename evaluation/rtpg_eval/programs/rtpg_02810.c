int test_func(void) {
    int v0 = 20;
    int v1 = 94;
    int v2 = 82;
    int v3 = 60;
    int i;
    v0 = v0 * 5;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
