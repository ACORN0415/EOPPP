int test_func(void) {
    int v0 = 46;
    int v1 = 86;
    int v2 = 60;
    int v3 = 14;
    int v4 = 59;
    int v5 = 34;
    int v6 = 90;
    int v7 = 39;
    int i;
    v2 = v2 - v3;
    v5 = 56;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
