int test_func(void) {
    int v0 = 72;
    int v1 = 61;
    int v2 = 8;
    int v3 = 62;
    int v4 = 22;
    int v5 = 39;
    int v6 = 81;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v6;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
