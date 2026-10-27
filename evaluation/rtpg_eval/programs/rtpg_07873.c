int test_func(void) {
    int v0 = 35;
    int v1 = 94;
    int v2 = 67;
    int v3 = 65;
    int v4 = 37;
    int v5 = 32;
    int v6 = 73;
    int i;
    v6 = 72;
    v0 = v0 - v5;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
