int test_func(void) {
    int v0 = 9;
    int v1 = 21;
    int v2 = 79;
    int v3 = 5;
    int v4 = 25;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v2;
    }
    int *__p = &v4;
    *__p = *__p + 1;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
