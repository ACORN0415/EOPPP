int test_func(void) {
    int v0 = 45;
    int v1 = 75;
    int v2 = 29;
    int v3 = 44;
    int i;
    if (v1 > v3) { v1 = v3; }
    for (i = 0; i < 19; i++) {
        v1 = v1 + v3;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
