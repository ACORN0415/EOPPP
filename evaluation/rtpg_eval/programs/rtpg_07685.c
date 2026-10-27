int test_func(void) {
    int v0 = 54;
    int v1 = 60;
    int v2 = 45;
    int v3 = 68;
    int i;
    v3 = v3 + v3;
    int *__p = &v2;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
