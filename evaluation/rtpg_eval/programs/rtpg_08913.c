int test_func(void) {
    int v0 = 59;
    int v1 = 22;
    int v2 = 4;
    int v3 = 49;
    int i;
    if (v1 > v1) { v1 = v1; }
    for (i = 0; i < 20; i++) {
        v2 = v2 + v2;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
