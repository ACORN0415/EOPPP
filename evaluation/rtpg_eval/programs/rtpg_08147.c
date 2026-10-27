int test_func(void) {
    int v0 = 26;
    int v1 = 47;
    int v2 = 82;
    int v3 = 62;
    int v4 = 48;
    int v5 = 22;
    int v6 = 68;
    int i;
    v3 = v3 + v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
