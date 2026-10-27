int test_func(void) {
    int v0 = 15;
    int v1 = 64;
    int v2 = 63;
    int v3 = 85;
    int v4 = 86;
    int v5 = 57;
    int v6 = 18;
    int v7 = 34;
    int i;
    v1 = v1 * 10;
    for (i = 0; i < 5; i++) {
        v4 = v4 + v6;
    }
    v0 = v0 + v7;
    return v0;
}
int main(void) { return test_func(); }
