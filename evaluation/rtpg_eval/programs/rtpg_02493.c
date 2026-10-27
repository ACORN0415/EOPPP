int test_func(void) {
    int v0 = 3;
    int v1 = 90;
    int v2 = 15;
    int i;
    v0 = v0 - v2;
    if (v1 > v2) { v1 = v2; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
