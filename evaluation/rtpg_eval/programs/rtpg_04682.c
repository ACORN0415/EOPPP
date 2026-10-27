int test_func(void) {
    int v0 = 71;
    int v1 = 89;
    int v2 = 29;
    int v3 = 82;
    int v4 = 1;
    int v5 = 72;
    int v6 = 26;
    int v7 = 85;
    int i;
    v4 = v4 + v7;
    v7 = 92;
    v6 = v6 - v2;
    int *__p = &v4;
    *__p = *__p + 1;
    v0 = v0 / (v4 + 1);
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
