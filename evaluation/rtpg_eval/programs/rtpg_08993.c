int test_func(void) {
    int v0 = 3;
    int v1 = 82;
    int v2 = 62;
    int v3 = 71;
    int v4 = 57;
    int i;
    if (v2 > v1) { v2 = v1; }
    v1 = v1 - v2;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
