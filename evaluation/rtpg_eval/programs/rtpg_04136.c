int test_func(void) {
    int v0 = 92;
    int v1 = 35;
    int v2 = 32;
    int v3 = 41;
    int v4 = 72;
    int v5 = 6;
    int v6 = 82;
    int i;
    v1 = v1 - v3;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
