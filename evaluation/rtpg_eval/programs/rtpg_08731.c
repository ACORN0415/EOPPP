int test_func(void) {
    int v0 = 12;
    int v1 = 63;
    int v2 = 47;
    int v3 = 77;
    int v4 = 56;
    int v5 = 53;
    int v6 = 39;
    int i;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
