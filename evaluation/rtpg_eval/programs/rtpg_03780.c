int test_func(void) {
    int v0 = 39;
    int v1 = 71;
    int v2 = 83;
    int v3 = 96;
    int v4 = 91;
    int v5 = 30;
    int v6 = 97;
    int v7 = 20;
    int i;
    v0 = 23;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
