int test_func(void) {
    int v0 = 34;
    int v1 = 68;
    int v2 = 33;
    int v3 = 37;
    int v4 = 76;
    int v5 = 6;
    int i;
    v0 = v0 + v0;
    if (v0 > v0) { v0 = v0; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
