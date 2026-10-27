int test_func(void) {
    int v0 = 37;
    int v1 = 79;
    int v2 = 19;
    int v3 = 96;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v1;
    }
    v0 = v0 - v1;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
