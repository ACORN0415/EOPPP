int test_func(void) {
    int v0 = 32;
    int v1 = 59;
    int v2 = 79;
    int v3 = 22;
    int v4 = 8;
    int v5 = 47;
    int v6 = 23;
    int v7 = 100;
    int i;
    v2 = v2 - v1;
    v5 = v5 * 5;
    v0 = 86;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
