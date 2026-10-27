int test_func(void) {
    int v0 = 91;
    int v1 = 32;
    int v2 = 74;
    int v3 = 12;
    int v4 = 100;
    int i;
    v3 = v3 + v0;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
