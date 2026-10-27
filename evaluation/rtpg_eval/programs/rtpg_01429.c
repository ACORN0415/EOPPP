int test_func(void) {
    int v0 = 58;
    int v1 = 83;
    int v2 = 70;
    int v3 = 15;
    int v4 = 34;
    int i;
    v3 = 79;
    v2 = v2 - v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
