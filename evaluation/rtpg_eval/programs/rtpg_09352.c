int test_func(void) {
    int v0 = 99;
    int v1 = 6;
    int v2 = 56;
    int v3 = 94;
    int v4 = 76;
    int v5 = 74;
    int v6 = 74;
    int i;
    v4 = 58;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
