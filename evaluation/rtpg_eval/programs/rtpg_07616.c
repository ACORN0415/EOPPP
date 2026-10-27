int test_func(void) {
    int v0 = 87;
    int v1 = 25;
    int v2 = 6;
    int v3 = 15;
    int v4 = 62;
    int v5 = 90;
    int v6 = 93;
    int v7 = 58;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v5;
    }
    v0 = v0 - v4;
    v0 = v0 & v4;
    return v0;
}
int main(void) { return test_func(); }
