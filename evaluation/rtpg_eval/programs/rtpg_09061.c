int test_func(void) {
    int v0 = 28;
    int v1 = 73;
    int v2 = 87;
    int v3 = 25;
    int v4 = 77;
    int v5 = 94;
    int i;
    if (v3 > v4) { v3 = v4; }
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
