int test_func(void) {
    int v0 = 88;
    int v1 = 55;
    int v2 = 87;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v0;
    }
    v1 = 6;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
