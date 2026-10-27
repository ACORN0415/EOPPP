int test_func(void) {
    int v0 = 1;
    int v1 = 96;
    int v2 = 68;
    int v3 = 60;
    int i;
    v2 = v2 + v1;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v3;
    }
    v1 = v1 * 9;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v3 = v3 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
