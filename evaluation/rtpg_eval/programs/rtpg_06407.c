int test_func(void) {
    int v0 = 32;
    int v1 = 32;
    int v2 = 92;
    int v3 = 63;
    int v4 = 100;
    int v5 = 99;
    int v6 = 38;
    int v7 = 39;
    int i;
    for (i = 0; i < 12; i++) {
        v5 = v5 + v6;
    }
    v6 = v6 ^ v5;
    return v0;
}
int main(void) { return test_func(); }
