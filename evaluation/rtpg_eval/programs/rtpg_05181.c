int test_func(void) {
    int v0 = 45;
    int v1 = 50;
    int v2 = 68;
    int v3 = 7;
    int v4 = 91;
    int v5 = 22;
    int i;
    v2 = v2 + v3;
    v5 = 61;
    if (v1 > v4) { v1 = v4; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
