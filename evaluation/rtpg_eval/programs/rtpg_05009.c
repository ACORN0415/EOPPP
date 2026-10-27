int test_func(void) {
    int v0 = 25;
    int v1 = 99;
    int v2 = 41;
    int i;
    if (v1 > v0) { v1 = v0; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
