int test_func(void) {
    int v0 = 80;
    int v1 = 58;
    int v2 = 5;
    int v3 = 76;
    int v4 = 99;
    int v5 = 2;
    int i;
    v3 = v3 + v4;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
