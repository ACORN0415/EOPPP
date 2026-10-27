int test_func(void) {
    int v0 = 56;
    int v1 = 89;
    int v2 = 86;
    int v3 = 33;
    int i;
    v2 = v2 + v0;
    v3 = v3 & v2;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
