int test_func(void) {
    int v0 = 30;
    int v1 = 31;
    int v2 = 68;
    int v3 = 82;
    int i;
    if (v2 > v3) { v2 = v3; }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
