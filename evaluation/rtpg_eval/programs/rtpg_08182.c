int test_func(void) {
    int v0 = 28;
    int v1 = 30;
    int v2 = 93;
    int v3 = 9;
    int v4 = 97;
    int v5 = 21;
    int i;
    v5 = v5 * 10;
    if (v2 > v4) { v2 = v4; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
