int test_func(void) {
    int v0 = 83;
    int v1 = 94;
    int v2 = 31;
    int v3 = 72;
    int v4 = 66;
    int v5 = 42;
    int v6 = 76;
    int v7 = 36;
    int i;
    for (i = 0; i < 5; i++) {
        v7 = v7 + v6;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
