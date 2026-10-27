int test_func(void) {
    int v0 = 32;
    int v1 = 29;
    int v2 = 34;
    int v3 = 30;
    int v4 = 13;
    int v5 = 81;
    int v6 = 33;
    int i;
    if (v3 > v4) { v3 = v4; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
