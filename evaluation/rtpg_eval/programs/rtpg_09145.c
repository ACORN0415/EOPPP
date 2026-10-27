int test_func(void) {
    int v0 = 84;
    int v1 = 10;
    int v2 = 11;
    int v3 = 93;
    int i;
    v0 = v0 - v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
