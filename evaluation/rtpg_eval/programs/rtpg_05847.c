int test_func(void) {
    int v0 = 55;
    int v1 = 97;
    int v2 = 92;
    int v3 = 80;
    int v4 = 86;
    int v5 = 96;
    int v6 = 28;
    int v7 = 74;
    int i;
    if (v0 > v3) { v0 = v3; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v7;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
