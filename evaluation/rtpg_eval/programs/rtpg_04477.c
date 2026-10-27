int test_func(void) {
    int v0 = 96;
    int v1 = 50;
    int v2 = 90;
    int v3 = 31;
    int i;
    v0 = v0 + v3;
    v2 = v2 - v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
