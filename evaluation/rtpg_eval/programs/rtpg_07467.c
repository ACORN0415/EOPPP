int test_func(void) {
    int v0 = 80;
    int v1 = 78;
    int v2 = 62;
    int v3 = 96;
    int i;
    if (v0 > v2) { v0 = v2; }
    v3 = v3 / (v0 + 1);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
