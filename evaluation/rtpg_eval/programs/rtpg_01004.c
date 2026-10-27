int test_func(void) {
    int v0 = 61;
    int v1 = 91;
    int v2 = 52;
    int v3 = 90;
    int v4 = 66;
    int v5 = 33;
    int i;
    if (v4 > v3) { v4 = v3; }
    v0 = 90;
    v1 = v1 | v4;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
