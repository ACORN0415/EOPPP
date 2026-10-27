int test_func(void) {
    int v0 = 33;
    int v1 = 14;
    int v2 = 35;
    int v3 = 49;
    int v4 = 91;
    int v5 = 48;
    int v6 = 72;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v4;
    }
    v3 = v3 + v5;
    return v0;
}
int main(void) { return test_func(); }
