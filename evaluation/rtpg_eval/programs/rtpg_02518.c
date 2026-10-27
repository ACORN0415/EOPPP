int test_func(void) {
    int v0 = 91;
    int v1 = 75;
    int v2 = 93;
    int v3 = 50;
    int v4 = 71;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
