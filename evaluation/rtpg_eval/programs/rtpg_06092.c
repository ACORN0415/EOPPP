int test_func(void) {
    int v0 = 40;
    int v1 = 29;
    int v2 = 32;
    int v3 = 21;
    int i;
    if (v1 > v1) { v1 = v1; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
