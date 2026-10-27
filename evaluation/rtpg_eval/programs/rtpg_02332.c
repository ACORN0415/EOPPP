int test_func(void) {
    int v0 = 86;
    int v1 = 52;
    int v2 = 74;
    int v3 = 87;
    int v4 = 65;
    int v5 = 81;
    int v6 = 34;
    int v7 = 77;
    int i;
    v3 = v3 - v5;
    v1 = v1 + v6;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
