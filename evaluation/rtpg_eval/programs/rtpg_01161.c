int test_func(void) {
    int v0 = 19;
    int v1 = 67;
    int v2 = 78;
    int v3 = 23;
    int v4 = 42;
    int i;
    if (v4 > v4) { v4 = v4; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
