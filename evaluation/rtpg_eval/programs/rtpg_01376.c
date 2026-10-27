int test_func(void) {
    int v0 = 72;
    int v1 = 17;
    int v2 = 12;
    int i;
    v2 = 6;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
