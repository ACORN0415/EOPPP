int test_func(void) {
    int v0 = 62;
    int v1 = 50;
    int v2 = 15;
    int v3 = 53;
    int v4 = 50;
    int v5 = 17;
    int i;
    v1 = v1 + v5;
    v5 = v5 | v2;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
