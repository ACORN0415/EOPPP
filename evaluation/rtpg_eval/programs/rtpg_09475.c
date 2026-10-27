int test_func(void) {
    int v0 = 89;
    int v1 = 81;
    int v2 = 27;
    int v3 = 50;
    int v4 = 64;
    int v5 = 69;
    int v6 = 20;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v5;
    }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
