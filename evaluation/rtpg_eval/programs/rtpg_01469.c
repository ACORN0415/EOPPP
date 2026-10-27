int test_func(void) {
    int v0 = 88;
    int v1 = 83;
    int v2 = 80;
    int v3 = 62;
    int v4 = 21;
    int v5 = 7;
    int v6 = 4;
    int v7 = 79;
    int i;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
