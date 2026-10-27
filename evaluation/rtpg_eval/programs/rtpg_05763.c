int test_func(void) {
    int v0 = 40;
    int v1 = 23;
    int v2 = 6;
    int v3 = 79;
    int v4 = 34;
    int i;
    v4 = v4 - v2;
    v3 = 10;
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
