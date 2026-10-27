int test_func(void) {
    int v0 = 29;
    int v1 = 91;
    int v2 = 12;
    int v3 = 0;
    int v4 = 97;
    int v5 = 49;
    int v6 = 0;
    int v7 = 1;
    int i;
    v6 = v6 * 9;
    for (i = 0; i < 6; i++) {
        v7 = v7 + v6;
    }
    v1 = v1 + v3;
    v0 = 28;
    return v0;
}
int main(void) { return test_func(); }
