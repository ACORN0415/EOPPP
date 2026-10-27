int test_func(void) {
    int v0 = 38;
    int v1 = 34;
    int v2 = 39;
    int v3 = 73;
    int v4 = 81;
    int v5 = 69;
    int v6 = 45;
    int v7 = 96;
    int i;
    if (v6 > v7) { v6 = v7; }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
