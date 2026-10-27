int test_func(void) {
    int v0 = 41;
    int v1 = 97;
    int v2 = 33;
    int v3 = 99;
    int v4 = 23;
    int v5 = 22;
    int v6 = 13;
    int i;
    v1 = v1 + v6;
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
