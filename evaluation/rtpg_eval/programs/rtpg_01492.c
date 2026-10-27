int test_func(void) {
    int v0 = 74;
    int v1 = 15;
    int v2 = 18;
    int v3 = 67;
    int i;
    v3 = v3 + v3;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
