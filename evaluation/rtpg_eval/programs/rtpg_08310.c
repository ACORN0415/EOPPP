int test_func(void) {
    int v0 = 85;
    int v1 = 80;
    int v2 = 26;
    int v3 = 64;
    int v4 = 73;
    int v5 = 29;
    int v6 = 65;
    int v7 = 54;
    int i;
    v1 = 81;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v4;
    }
    v2 = v2 - v0;
    return v0;
}
int main(void) { return test_func(); }
