int test_func(void) {
    int v0 = 97;
    int v1 = 70;
    int v2 = 100;
    int v3 = 65;
    int v4 = 67;
    int v5 = 72;
    int v6 = 66;
    int v7 = 44;
    int i;
    v1 = v1 + v4;
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }
