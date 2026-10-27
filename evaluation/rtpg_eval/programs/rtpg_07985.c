int test_func(void) {
    int v0 = 4;
    int v1 = 73;
    int v2 = 71;
    int v3 = 44;
    int v4 = 21;
    int v5 = 58;
    int v6 = 77;
    int v7 = 49;
    int i;
    v5 = v5 + v7;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
