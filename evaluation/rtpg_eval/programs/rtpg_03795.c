int test_func(void) {
    int v0 = 62;
    int v1 = 31;
    int v2 = 25;
    int v3 = 24;
    int v4 = 99;
    int i;
    if (v2 > v0) { v2 = v0; }
    v2 = v2 + v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
