int test_func(void) {
    int v0 = 44;
    int v1 = 17;
    int v2 = 23;
    int v3 = 29;
    int v4 = 47;
    int i;
    v2 = v2 - v3;
    if (v2 > v1) { v2 = v1; }
    v2 = v2 / (v0 + 1);
    int *__p = &v1;
    *__p = *__p + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
