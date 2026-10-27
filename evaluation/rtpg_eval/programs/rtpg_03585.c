int test_func(void) {
    int v0 = 8;
    int v1 = 63;
    int v2 = 86;
    int v3 = 91;
    int v4 = 75;
    int v5 = 33;
    int v6 = 48;
    int v7 = 74;
    int i;
    for (i = 0; i < 10; i++) {
        v7 = v7 + v0;
    }
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
