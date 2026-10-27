int test_func(void) {
    int v0 = 8;
    int v1 = 74;
    int v2 = 37;
    int i;
    if (v0 > v0) { v0 = v0; }
    v1 = v1 + v2;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
