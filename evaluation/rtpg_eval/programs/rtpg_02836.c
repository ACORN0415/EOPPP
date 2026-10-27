int test_func(void) {
    int v0 = 33;
    int v1 = 98;
    int v2 = 92;
    int v3 = 3;
    int v4 = 60;
    int v5 = 53;
    int v6 = 71;
    int v7 = 2;
    int i;
    v0 = 11;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v3;
    }
    v6 = v6 - v4;
    return v0;
}
int main(void) { return test_func(); }
