int test_func(void) {
    int v0 = 6;
    int v1 = 37;
    int v2 = 70;
    int v3 = 28;
    int v4 = 73;
    int v5 = 9;
    int v6 = 21;
    int v7 = 7;
    int i;
    if (v4 > v7) { v4 = v7; }
    v5 = v5 * 8;
    v2 = v2 + v7;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
