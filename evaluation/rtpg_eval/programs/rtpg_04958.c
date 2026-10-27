int test_func(void) {
    int v0 = 57;
    int v1 = 45;
    int v2 = 61;
    int v3 = 17;
    int v4 = 84;
    int v5 = 30;
    int v6 = 98;
    int i;
    v1 = 53;
    v6 = v6 - v0;
    int *__p = &v3;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
