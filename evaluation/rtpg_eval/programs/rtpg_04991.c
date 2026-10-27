int test_func(void) {
    int v0 = 63;
    int v1 = 96;
    int v2 = 50;
    int v3 = 64;
    int v4 = 29;
    int v5 = 76;
    int v6 = 37;
    int v7 = 98;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v5;
    }
    v7 = v7 - v3;
    v6 = v6 * 7;
    v5 = v5 + v2;
    return v0;
}
int main(void) { return test_func(); }
