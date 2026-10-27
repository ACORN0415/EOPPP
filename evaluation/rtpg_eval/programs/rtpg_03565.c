int test_func(void) {
    int v0 = 7;
    int v1 = 83;
    int v2 = 14;
    int v3 = 4;
    int v4 = 66;
    int i;
    v2 = v2 - v4;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
