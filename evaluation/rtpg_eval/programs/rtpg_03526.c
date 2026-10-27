int test_func(void) {
    int v0 = 62;
    int v1 = 53;
    int v2 = 76;
    int v3 = 94;
    int v4 = 85;
    int v5 = 66;
    int v6 = 14;
    int v7 = 80;
    int i;
    if (v2 > v5) { v2 = v5; }
    v3 = v3 + v1;
    int *__p = &v4;
    *__p = *__p + 1;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
