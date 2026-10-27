int test_func(void) {
    int v0 = 90;
    int v1 = 22;
    int v2 = 41;
    int v3 = 77;
    int v4 = 15;
    int v5 = 48;
    int i;
    v0 = v0 + v5;
    v3 = v3 - v0;
    for (i = 0; i < 8; i++) {
        v5 = v5 + v2;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
