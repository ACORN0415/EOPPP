int test_func(void) {
    int v0 = 1;
    int v1 = 43;
    int v2 = 48;
    int v3 = 70;
    int v4 = 30;
    int v5 = 5;
    int v6 = 47;
    int v7 = 56;
    int i;
    v3 = v3 + v3;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    return v0;
}
int main(void) { return test_func(); }
