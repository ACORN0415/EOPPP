int test_func(void) {
    int v0 = 77;
    int v1 = 13;
    int v2 = 95;
    int v3 = 46;
    int v4 = 32;
    int v5 = 23;
    int v6 = 59;
    int v7 = 30;
    int i;
    v3 = v3 + v0;
    v0 = v0 * 8;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
