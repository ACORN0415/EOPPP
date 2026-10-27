int test_func(void) {
    int v0 = 26;
    int v1 = 71;
    int v2 = 10;
    int v3 = 99;
    int i;
    v0 = v0 - v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
