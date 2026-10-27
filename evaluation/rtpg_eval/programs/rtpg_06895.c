int test_func(void) {
    int v0 = 88;
    int v1 = 10;
    int v2 = 37;
    int v3 = 81;
    int v4 = 49;
    int v5 = 3;
    int i;
    v4 = v4 * 3;
    v0 = 61;
    v2 = v2 - v4;
    v4 = v4 ^ v2;
    return v0;
}
int main(void) { return test_func(); }
