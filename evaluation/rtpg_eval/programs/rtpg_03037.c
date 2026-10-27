int test_func(void) {
    int v0 = 76;
    int v1 = 83;
    int v2 = 77;
    int v3 = 48;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v3;
    }
    v0 = 40;
    v0 = v0 - v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
