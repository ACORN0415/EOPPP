int test_func(void) {
    int v0 = 72;
    int v1 = 33;
    int v2 = 94;
    int v3 = 12;
    int v4 = 86;
    int v5 = 85;
    int v6 = 25;
    int v7 = 66;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v2;
    }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
