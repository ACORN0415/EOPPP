int test_func(void) {
    int v0 = 37;
    int v1 = 38;
    int v2 = 13;
    int v3 = 99;
    int v4 = 2;
    int v5 = 2;
    int v6 = 15;
    int i;
    v3 = v3 + v3;
    v0 = 88;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
