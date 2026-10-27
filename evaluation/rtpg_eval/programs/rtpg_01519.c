int test_func(void) {
    int v0 = 54;
    int v1 = 90;
    int v2 = 8;
    int v3 = 94;
    int i;
    v1 = v1 - v0;
    v2 = v2 + v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
