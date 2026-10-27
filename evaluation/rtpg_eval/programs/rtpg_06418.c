int test_func(void) {
    int v0 = 0;
    int v1 = 91;
    int v2 = 61;
    int v3 = 86;
    int v4 = 89;
    int v5 = 37;
    int i;
    v0 = v0 - v1;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
