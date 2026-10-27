int test_func(void) {
    int v0 = 66;
    int v1 = 6;
    int v2 = 32;
    int v3 = 51;
    int v4 = 79;
    int v5 = 90;
    int v6 = 13;
    int v7 = 87;
    int i;
    v4 = v4 + v2;
    for (i = 0; i < 6; i++) {
        v7 = v7 + v2;
    }
    v5 = 26;
    v2 = v2 - v7;
    return v0;
}
int main(void) { return test_func(); }
