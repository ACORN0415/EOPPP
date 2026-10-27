int test_func(void) {
    int v0 = 30;
    int v1 = 44;
    int v2 = 100;
    int v3 = 55;
    int v4 = 8;
    int v5 = 34;
    int i;
    v4 = v4 * 7;
    v4 = 93;
    v5 = v5 - v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
