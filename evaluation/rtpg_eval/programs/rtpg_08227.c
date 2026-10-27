int test_func(void) {
    int v0 = 32;
    int v1 = 9;
    int v2 = 60;
    int v3 = 29;
    int v4 = 13;
    int v5 = 58;
    int v6 = 34;
    int i;
    if (v0 > v4) { v0 = v4; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
