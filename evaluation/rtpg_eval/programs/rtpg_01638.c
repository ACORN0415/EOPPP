int test_func(void) {
    int v0 = 8;
    int v1 = 21;
    int v2 = 97;
    int v3 = 71;
    int v4 = 91;
    int v5 = 81;
    int v6 = 23;
    int v7 = 69;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v6;
    }
    return v0;
}
int main(void) { return test_func(); }
