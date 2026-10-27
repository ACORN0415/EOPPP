int test_func(void) {
    int v0 = 96;
    int v1 = 89;
    int v2 = 50;
    int v3 = 18;
    int v4 = 55;
    int v5 = 70;
    int v6 = 54;
    int v7 = 10;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 11; i++) {
        v7 = v7 + v3;
    }
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v1 = v1 % (v7 + 1);
    return v0;
}
int main(void) { return test_func(); }
