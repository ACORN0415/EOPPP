int test_func(void) {
    int v0 = 41;
    int v1 = 76;
    int v2 = 4;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 9; i++) {
        v1 = v1 + v2;
    }
    v0 = v0 - v1;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
