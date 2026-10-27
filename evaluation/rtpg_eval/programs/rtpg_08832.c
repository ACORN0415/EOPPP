int test_func(void) {
    int v0 = 99;
    int v1 = 8;
    int v2 = 12;
    int v3 = 9;
    int v4 = 77;
    int v5 = 72;
    int v6 = 76;
    int v7 = 64;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v3;
    }
    v7 = 2;
    v7 = v7 - v6;
    return v0;
}
int main(void) { return test_func(); }
