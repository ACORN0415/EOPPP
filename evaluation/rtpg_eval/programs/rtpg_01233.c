int test_func(void) {
    int v0 = 88;
    int v1 = 33;
    int v2 = 62;
    int v3 = 31;
    int v4 = 22;
    int v5 = 73;
    int v6 = 2;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
