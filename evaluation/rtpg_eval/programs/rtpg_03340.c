int test_func(void) {
    int v0 = 59;
    int v1 = 54;
    int v2 = 22;
    int v3 = 76;
    int v4 = 4;
    int v5 = 8;
    int v6 = 58;
    int i;
    v6 = 6;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
