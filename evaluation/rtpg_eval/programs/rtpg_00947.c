int test_func(void) {
    int v0 = 47;
    int v1 = 1;
    int v2 = 37;
    int v3 = 2;
    int v4 = 48;
    int i;
    v2 = v2 * 3;
    v1 = v1 + v2;
    v1 = v1 - v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
