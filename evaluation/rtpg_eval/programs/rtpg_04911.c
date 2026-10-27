int test_func(void) {
    int v0 = 7;
    int v1 = 29;
    int v2 = 62;
    int v3 = 23;
    int v4 = 30;
    int v5 = 78;
    int v6 = 15;
    int i;
    if (v5 > v5) { v5 = v5; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
