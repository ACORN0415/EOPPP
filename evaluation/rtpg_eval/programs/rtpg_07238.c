int test_func(void) {
    int v0 = 46;
    int v1 = 70;
    int v2 = 82;
    int v3 = 4;
    int v4 = 63;
    int i;
    if (v1 > v2) { v1 = v2; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    v1 = v1 ^ v3;
    return v0;
}
int main(void) { return test_func(); }
