int test_func(void) {
    int v0 = 38;
    int v1 = 48;
    int v2 = 55;
    int v3 = 30;
    int v4 = 2;
    int v5 = 19;
    int v6 = 44;
    int v7 = 14;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v2;
    }
    v0 = v0 - v4;
    v3 = v3 ^ v5;
    return v0;
}
int main(void) { return test_func(); }
