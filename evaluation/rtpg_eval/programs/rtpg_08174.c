int test_func(void) {
    int v0 = 52;
    int v1 = 55;
    int v2 = 23;
    int v3 = 7;
    int v4 = 100;
    int v5 = 48;
    int i;
    if (v2 > v0) { v2 = v0; }
    for (i = 0; i < 5; i++) {
        v4 = v4 + v0;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v0 = v0 | v2;
    return v0;
}
int main(void) { return test_func(); }
