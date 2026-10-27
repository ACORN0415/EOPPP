int test_func(void) {
    int v0 = 38;
    int v1 = 30;
    int v2 = 68;
    int v3 = 73;
    int i;
    if (v2 > v2) { v2 = v2; }
    v1 = v1 + v2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }
