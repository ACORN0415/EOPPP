int test_func(void) {
    int v0 = 77;
    int v1 = 40;
    int v2 = 74;
    int v3 = 99;
    int v4 = 82;
    int v5 = 5;
    int v6 = 92;
    int v7 = 82;
    int i;
    v0 = 78;
    if (v1 > v6) { v1 = v6; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
