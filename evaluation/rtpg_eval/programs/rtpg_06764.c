int test_func(void) {
    int v0 = 6;
    int v1 = 61;
    int v2 = 13;
    int v3 = 77;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v3;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
