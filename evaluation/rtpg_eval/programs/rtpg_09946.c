int test_func(void) {
    int v0 = 85;
    int v1 = 65;
    int v2 = 89;
    int v3 = 11;
    int v4 = 86;
    int v5 = 90;
    int v6 = 17;
    int v7 = 12;
    int i;
    v2 = 87;
    v1 = v1 - v3;
    int *__p = &v3;
    *__p = *__p + 1;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
