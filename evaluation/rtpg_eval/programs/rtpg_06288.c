int test_func(void) {
    int v0 = 82;
    int v1 = 58;
    int v2 = 33;
    int v3 = 21;
    int v4 = 38;
    int v5 = 5;
    int v6 = 25;
    int v7 = 99;
    int i;
    for (i = 0; i < 8; i++) {
        v5 = v5 + v2;
    }
    v5 = v5 | v3;
    return v0;
}
int main(void) { return test_func(); }
