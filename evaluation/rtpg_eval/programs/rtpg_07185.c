int test_func(void) {
    int v0 = 95;
    int v1 = 95;
    int v2 = 47;
    int v3 = 4;
    int v4 = 100;
    int v5 = 96;
    int v6 = 85;
    int i;
    for (i = 0; i < 16; i++) {
        v6 = v6 + v4;
    }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    return v0;
}
int main(void) { return test_func(); }
