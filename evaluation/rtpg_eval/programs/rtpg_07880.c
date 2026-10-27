int test_func(void) {
    int v0 = 18;
    int v1 = 57;
    int v2 = 53;
    int v3 = 10;
    int i;
    v3 = v3 + v3;
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
