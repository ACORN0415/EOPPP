int test_func(void) {
    int v0 = 87;
    int v1 = 14;
    int v2 = 76;
    int v3 = 84;
    int v4 = 84;
    int v5 = 69;
    int v6 = 9;
    int i;
    v6 = 32;
    if (v0 > v2) { v0 = v2; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
