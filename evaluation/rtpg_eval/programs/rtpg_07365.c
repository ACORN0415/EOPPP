int test_func(void) {
    int v0 = 9;
    int v1 = 80;
    int v2 = 100;
    int v3 = 66;
    int v4 = 95;
    int i;
    v4 = 13;
    int *__p = &v1;
    *__p = *__p + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v0 = v0 % (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
