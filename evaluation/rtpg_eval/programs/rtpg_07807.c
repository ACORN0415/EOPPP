int test_func(void) {
    int v0 = 75;
    int v1 = 15;
    int v2 = 7;
    int v3 = 22;
    int v4 = 88;
    int v5 = 49;
    int v6 = 19;
    int v7 = 82;
    int i;
    if (v1 > v2) { v1 = v2; }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
