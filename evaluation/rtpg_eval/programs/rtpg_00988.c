int test_func(void) {
    int v0 = 79;
    int v1 = 5;
    int v2 = 15;
    int v3 = 41;
    int v4 = 23;
    int i;
    v0 = v0 + v2;
    v0 = 27;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
