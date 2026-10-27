int test_func(void) {
    int v0 = 82;
    int v1 = 83;
    int v2 = 60;
    int v3 = 57;
    int v4 = 86;
    int i;
    v2 = v2 - v1;
    v1 = v1 ^ v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
