int test_func(void) {
    int v0 = 60;
    int v1 = 81;
    int v2 = 5;
    int v3 = 52;
    int v4 = 49;
    int i;
    v0 = v0 - v2;
    int *__p = &v4;
    *__p = *__p + 1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v1 = v1 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }
