int test_func(void) {
    int v0 = 9;
    int v1 = 60;
    int v2 = 23;
    int v3 = 22;
    int v4 = 22;
    int v5 = 51;
    int v6 = 77;
    int i;
    v1 = v1 * 3;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
