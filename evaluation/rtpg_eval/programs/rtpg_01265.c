int test_func(void) {
    int v0 = 81;
    int v1 = 85;
    int v2 = 98;
    int i;
    v1 = 82;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
