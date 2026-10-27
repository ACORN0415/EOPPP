int test_func(void) {
    int v0 = 0;
    int v1 = 6;
    int v2 = 26;
    int i;
    v2 = v2 * 4;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
