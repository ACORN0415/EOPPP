int test_func(void) {
    int v0 = 1;
    int v1 = 3;
    int v2 = 100;
    int v3 = 6;
    int v4 = 20;
    int v5 = 56;
    int v6 = 75;
    int i;
    v1 = 4;
    v2 = v2 + v4;
    v3 = v3 * 4;
    return v0;
}
int main(void) { return test_func(); }
