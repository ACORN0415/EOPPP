int test_func(void) {
    int v0 = 8;
    int v1 = 20;
    int v2 = 33;
    int v3 = 43;
    int v4 = 55;
    int v5 = 19;
    int v6 = 80;
    int v7 = 24;
    int i;
    v2 = v2 - v7;
    for (i = 0; i < 6; i++) {
        v7 = v7 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
