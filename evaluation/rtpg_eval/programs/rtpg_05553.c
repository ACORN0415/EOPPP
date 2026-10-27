int test_func(void) {
    int v0 = 11;
    int v1 = 23;
    int v2 = 93;
    int v3 = 25;
    int v4 = 81;
    int i;
    v1 = v1 + v3;
    v2 = v2 * 8;
    if (v0 > v4) { v0 = v4; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v4 = v4 | v1;
    return v0;
}
int main(void) { return test_func(); }
