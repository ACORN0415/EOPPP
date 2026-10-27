int test_func(void) {
    int v0 = 68;
    int v1 = 97;
    int v2 = 81;
    int v3 = 0;
    int v4 = 41;
    int v5 = 53;
    int i;
    v4 = v4 * 5;
    v4 = v4 + v3;
    v1 = v1 - v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
