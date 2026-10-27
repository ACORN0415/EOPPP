int test_func(void) {
    int v0 = 75;
    int v1 = 37;
    int v2 = 25;
    int i;
    if (v1 > v0) { v1 = v0; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
