int test_func(void) {
    int v0 = 27;
    int v1 = 10;
    int v2 = 25;
    int v3 = 50;
    int v4 = 71;
    int v5 = 11;
    int v6 = 70;
    int v7 = 60;
    int i;
    v1 = v1 * 3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
