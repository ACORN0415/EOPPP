int test_func(void) {
    int v0 = 39;
    int v1 = 28;
    int v2 = 68;
    int v3 = 64;
    int i;
    if (v0 > v3) { v0 = v3; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
