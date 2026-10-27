int test_func(void) {
    int v0 = 99;
    int v1 = 88;
    int v2 = 70;
    int v3 = 49;
    int v4 = 43;
    int v5 = 13;
    int i;
    v2 = v2 * 8;
    v0 = v0 - v2;
    v1 = v1 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }
