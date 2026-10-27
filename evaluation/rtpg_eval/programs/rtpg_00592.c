int test_func(void) {
    int v0 = 3;
    int v1 = 44;
    int v2 = 93;
    int v3 = 80;
    int v4 = 85;
    int v5 = 24;
    int v6 = 26;
    int v7 = 55;
    int i;
    for (i = 0; i < 12; i++) {
        v7 = v7 + v2;
    }
    v5 = v5 + v3;
    v3 = v3 * 4;
    return v0;
}
int main(void) { return test_func(); }
