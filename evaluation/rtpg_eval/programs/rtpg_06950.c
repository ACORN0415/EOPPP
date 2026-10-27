int test_func(void) {
    int v0 = 84;
    int v1 = 84;
    int v2 = 8;
    int v3 = 35;
    int v4 = 93;
    int v5 = 45;
    int i;
    v3 = v3 + v2;
    v2 = 55;
    v1 = v1 * 7;
    v1 = v1 / (v3 + 1);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
