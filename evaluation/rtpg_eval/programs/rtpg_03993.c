int test_func(void) {
    int v0 = 56;
    int v1 = 74;
    int v2 = 90;
    int v3 = 74;
    int v4 = 47;
    int i;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
