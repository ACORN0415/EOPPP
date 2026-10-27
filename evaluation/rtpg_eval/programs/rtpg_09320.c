int test_func(void) {
    int v0 = 39;
    int v1 = 13;
    int v2 = 91;
    int v3 = 77;
    int v4 = 72;
    int v5 = 75;
    int i;
    v1 = 22;
    if (v2 > v1) { v2 = v1; }
    v0 = v0 - v4;
    v0 = v0 | v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
