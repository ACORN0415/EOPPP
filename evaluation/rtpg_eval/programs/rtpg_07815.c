int test_func(void) {
    int v0 = 11;
    int v1 = 64;
    int v2 = 6;
    int v3 = 67;
    int v4 = 89;
    int v5 = 29;
    int i;
    v4 = v4 - v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
