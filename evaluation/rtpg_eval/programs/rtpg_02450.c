int test_func(void) {
    int v0 = 67;
    int v1 = 14;
    int v2 = 49;
    int v3 = 33;
    int v4 = 73;
    int v5 = 6;
    int v6 = 58;
    int i;
    v1 = v1 * 10;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
    v2 = 43;
    v4 = v4 + v3;
    return v0;
}
int main(void) { return test_func(); }
