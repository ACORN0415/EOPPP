int test_func(void) {
    int v0 = 68;
    int v1 = 65;
    int v2 = 90;
    int v3 = 82;
    int v4 = 50;
    int v5 = 14;
    int v6 = 43;
    int i;
    v3 = v3 - v0;
    v1 = 42;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
