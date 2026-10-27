int test_func(void) {
    int v0 = 97;
    int v1 = 70;
    int v2 = 91;
    int v3 = 69;
    int v4 = 67;
    int v5 = 82;
    int v6 = 39;
    int v7 = 13;
    int i;
    v4 = v4 * 9;
    v7 = 3;
    int *__p = &v7;
    *__p = *__p + 1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
