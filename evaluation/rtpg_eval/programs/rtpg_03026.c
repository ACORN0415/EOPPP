int test_func(void) {
    int v0 = 23;
    int v1 = 85;
    int v2 = 36;
    int v3 = 30;
    int i;
    v0 = v0 * 5;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
