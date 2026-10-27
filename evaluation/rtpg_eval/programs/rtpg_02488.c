int test_func(void) {
    int v0 = 44;
    int v1 = 61;
    int v2 = 22;
    int v3 = 36;
    int i;
    v3 = 6;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
