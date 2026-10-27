int test_func(void) {
    int v0 = 23;
    int v1 = 27;
    int v2 = 49;
    int v3 = 62;
    int v4 = 44;
    int v5 = 13;
    int i;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v4 = v4 | v2;
    return v0;
}
int main(void) { return test_func(); }
