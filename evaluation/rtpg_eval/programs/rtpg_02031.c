int test_func(void) {
    int v0 = 32;
    int v1 = 32;
    int v2 = 26;
    int v3 = 56;
    int v4 = 19;
    int i;
    if (v1 > v2) { v1 = v2; }
    v0 = v0 ^ v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
