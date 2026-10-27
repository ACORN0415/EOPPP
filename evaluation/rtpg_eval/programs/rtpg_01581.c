int test_func(void) {
    int v0 = 66;
    int v1 = 31;
    int v2 = 89;
    int v3 = 7;
    int v4 = 79;
    int v5 = 0;
    int v6 = 36;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v0;
    }
    v0 = v0 + v4;
    v0 = 76;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
