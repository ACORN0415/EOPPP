int test_func(void) {
    int v0 = 20;
    int v1 = 22;
    int v2 = 84;
    int v3 = 91;
    int v4 = 9;
    int v5 = 74;
    int v6 = 85;
    int v7 = 7;
    int i;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v1;
    }
    v2 = 50;
    v5 = v5 & v3;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }
