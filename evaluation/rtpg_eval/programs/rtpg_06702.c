int test_func(void) {
    int v0 = 68;
    int v1 = 48;
    int v2 = 74;
    int v3 = 18;
    int v4 = 7;
    int v5 = 33;
    int i;
    v3 = v3 - v0;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
