int test_func(void) {
    int v0 = 58;
    int v1 = 79;
    int v2 = 45;
    int v3 = 17;
    int v4 = 6;
    int v5 = 8;
    int i;
    if (v5 > v2) { v5 = v2; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
