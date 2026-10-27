int test_func(void) {
    int v0 = 8;
    int v1 = 21;
    int v2 = 77;
    int v3 = 51;
    int v4 = 79;
    int v5 = 55;
    int i;
    v4 = v4 - v0;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
