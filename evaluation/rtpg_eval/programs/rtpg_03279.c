int test_func(void) {
    int v0 = 26;
    int v1 = 91;
    int v2 = 75;
    int v3 = 16;
    int v4 = 84;
    int v5 = 59;
    int v6 = 17;
    int v7 = 98;
    int i;
    v6 = v6 + v6;
    v7 = v7 - v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
