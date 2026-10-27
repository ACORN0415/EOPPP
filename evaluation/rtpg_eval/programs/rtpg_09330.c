int test_func(void) {
    int v0 = 60;
    int v1 = 52;
    int v2 = 67;
    int v3 = 7;
    int v4 = 55;
    int i;
    if (v1 > v3) { v1 = v3; }
    v1 = v1 - v0;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
