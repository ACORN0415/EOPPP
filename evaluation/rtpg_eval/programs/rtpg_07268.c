int test_func(void) {
    int v0 = 46;
    int v1 = 6;
    int v2 = 21;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v2;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
