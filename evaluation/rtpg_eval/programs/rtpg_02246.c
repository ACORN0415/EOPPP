int test_func(void) {
    int v0 = 93;
    int v1 = 54;
    int v2 = 87;
    int v3 = 66;
    int v4 = 42;
    int v5 = 16;
    int v6 = 56;
    int v7 = 41;
    int i;
    v5 = 85;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
