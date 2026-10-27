int test_func(void) {
    int v0 = 0;
    int v1 = 73;
    int v2 = 39;
    int v3 = 25;
    int i;
    v0 = v0 - v1;
    int *__p = &v1;
    *__p = *__p + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
