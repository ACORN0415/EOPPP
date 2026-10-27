int test_func(void) {
    int v0 = 7;
    int v1 = 96;
    int v2 = 5;
    int v3 = 9;
    int v4 = 31;
    int i;
    v1 = 95;
    v0 = v0 * 8;
    v4 = v4 + v3;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
