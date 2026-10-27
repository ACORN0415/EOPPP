int test_func(void) {
    int v0 = 75;
    int v1 = 8;
    int v2 = 2;
    int v3 = 14;
    int v4 = 37;
    int v5 = 46;
    int v6 = 61;
    int v7 = 69;
    int i;
    for (i = 0; i < 20; i++) {
        v7 = v7 + v7;
    }
    return v0;
}
int main(void) { return test_func(); }
