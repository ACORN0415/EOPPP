int test_func(void) {
    int v0 = 93;
    int v1 = 24;
    int v2 = 36;
    int v3 = 86;
    int v4 = 91;
    int v5 = 39;
    int v6 = 25;
    int i;
    v1 = v1 * 8;
    for (i = 0; i < 14; i++) {
        v6 = v6 + v1;
    }
    v2 = 46;
    v6 = v6 - v5;
    return v0;
}
int main(void) { return test_func(); }
