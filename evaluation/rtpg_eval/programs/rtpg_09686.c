int test_func(void) {
    int v0 = 48;
    int v1 = 56;
    int v2 = 12;
    int i;
    v0 = v0 * 2;
    v2 = v2 - v0;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v1;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
