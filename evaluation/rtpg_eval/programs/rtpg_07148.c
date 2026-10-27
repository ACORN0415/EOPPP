int test_func(void) {
    int v0 = 38;
    int v1 = 91;
    int v2 = 90;
    int v3 = 11;
    int v4 = 37;
    int v5 = 12;
    int v6 = 21;
    int v7 = 55;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
