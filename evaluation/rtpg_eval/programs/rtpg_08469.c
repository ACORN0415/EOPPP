int test_func(void) {
    int v0 = 90;
    int v1 = 29;
    int v2 = 40;
    int v3 = 57;
    int v4 = 83;
    int v5 = 38;
    int v6 = 40;
    int i;
    v4 = v4 - v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
