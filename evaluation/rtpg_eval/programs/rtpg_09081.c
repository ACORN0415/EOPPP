int test_func(void) {
    int v0 = 80;
    int v1 = 98;
    int v2 = 78;
    int v3 = 60;
    int v4 = 67;
    int i;
    v0 = v0 - v2;
    v0 = v0 + v0;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
