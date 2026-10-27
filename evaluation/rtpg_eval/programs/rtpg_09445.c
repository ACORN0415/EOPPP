int test_func(void) {
    int v0 = 63;
    int v1 = 91;
    int v2 = 83;
    int v3 = 78;
    int i;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v3;
    }
    v1 = 5;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
