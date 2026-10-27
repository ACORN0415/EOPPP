int test_func(void) {
    int v0 = 60;
    int v1 = 1;
    int v2 = 62;
    int v3 = 64;
    int v4 = 99;
    int i;
    v2 = v2 * 7;
    v3 = v3 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
