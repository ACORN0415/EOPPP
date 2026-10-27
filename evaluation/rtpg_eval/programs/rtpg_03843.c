int test_func(void) {
    int v0 = 75;
    int v1 = 79;
    int v2 = 23;
    int v3 = 17;
    int v4 = 84;
    int v5 = 98;
    int v6 = 97;
    int i;
    for (i = 0; i < 9; i++) {
        v6 = v6 + v6;
    }
    v4 = v4 * 10;
    v5 = v5 + v6;
    return v0;
}
int main(void) { return test_func(); }
