int test_func(void) {
    int v0 = 43;
    int v1 = 89;
    int v2 = 82;
    int v3 = 72;
    int v4 = 53;
    int v5 = 100;
    int v6 = 87;
    int i;
    if (v1 > v0) { v1 = v0; }
    v0 = v0 - v2;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    v2 = v2 % (v0 + 1);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
