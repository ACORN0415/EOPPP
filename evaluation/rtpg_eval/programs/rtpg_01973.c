int test_func(void) {
    int v0 = 71;
    int v1 = 77;
    int v2 = 93;
    int v3 = 60;
    int v4 = 54;
    int i;
    v3 = v3 - v2;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    v3 = v3 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
