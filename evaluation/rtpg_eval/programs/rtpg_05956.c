int test_func(void) {
    int v0 = 37;
    int v1 = 1;
    int v2 = 84;
    int v3 = 19;
    int v4 = 68;
    int v5 = 1;
    int v6 = 22;
    int v7 = 64;
    int i;
    v6 = v6 + v6;
    v7 = v7 - v5;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
