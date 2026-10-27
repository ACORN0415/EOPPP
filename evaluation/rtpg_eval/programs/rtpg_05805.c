int test_func(void) {
    int v0 = 26;
    int v1 = 84;
    int v2 = 37;
    int i;
    v2 = 46;
    if (v1 > v2) { v1 = v2; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    int *__p = &v2;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
