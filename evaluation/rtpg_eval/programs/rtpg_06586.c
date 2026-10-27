int test_func(void) {
    int v0 = 71;
    int v1 = 33;
    int v2 = 92;
    int v3 = 2;
    int v4 = 98;
    int v5 = 95;
    int v6 = 99;
    int i;
    v5 = 75;
    for (i = 0; i < 9; i++) {
        v5 = v5 + v6;
    }
    return v0;
}
int main(void) { return test_func(); }
