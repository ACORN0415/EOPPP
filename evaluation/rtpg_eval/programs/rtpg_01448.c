int test_func(void) {
    int v0 = 56;
    int v1 = 37;
    int v2 = 33;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
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
