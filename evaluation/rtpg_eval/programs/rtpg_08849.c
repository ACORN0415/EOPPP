int test_func(void) {
    int v0 = 28;
    int v1 = 17;
    int v2 = 24;
    int v3 = 4;
    int v4 = 99;
    int i;
    v3 = 64;
    v3 = v3 - v1;
    v1 = v1 * 5;
    v4 = v4 + v3;
    return v0;
}
int main(void) { return test_func(); }
