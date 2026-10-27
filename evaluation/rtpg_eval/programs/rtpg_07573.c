int test_func(void) {
    int v0 = 20;
    int v1 = 48;
    int v2 = 65;
    int v3 = 49;
    int v4 = 74;
    int v5 = 39;
    int i;
    v5 = v5 - v4;
    int *__p = &v3;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
