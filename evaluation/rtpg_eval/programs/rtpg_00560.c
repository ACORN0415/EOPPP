int test_func(void) {
    int v0 = 85;
    int v1 = 57;
    int v2 = 2;
    int v3 = 50;
    int v4 = 31;
    int i;
    v0 = v0 + v3;
    v3 = v3 - v4;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v2;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
