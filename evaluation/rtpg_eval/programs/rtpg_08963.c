int test_func(void) {
    int v0 = 30;
    int v1 = 83;
    int v2 = 87;
    int v3 = 43;
    int v4 = 0;
    int v5 = 95;
    int i;
    if (v3 > v1) { v3 = v1; }
    v0 = v0 - v2;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
