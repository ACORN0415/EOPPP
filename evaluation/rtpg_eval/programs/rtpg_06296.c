int test_func(void) {
    int v0 = 34;
    int v1 = 62;
    int v2 = 4;
    int i;
    if (v2 > v2) { v2 = v2; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
