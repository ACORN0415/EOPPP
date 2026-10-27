int test_func(void) {
    int v0 = 43;
    int v1 = 84;
    int v2 = 22;
    int i;
    if (v2 > v1) { v2 = v1; }
    int *__p = &v2;
    *__p = *__p + 1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v1 = v1 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
