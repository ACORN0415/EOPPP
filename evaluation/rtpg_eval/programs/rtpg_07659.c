int test_func(void) {
    int v0 = 93;
    int v1 = 65;
    int v2 = 40;
    int v3 = 83;
    int v4 = 63;
    int v5 = 12;
    int v6 = 17;
    int i;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
