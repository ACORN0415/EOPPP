int test_func(void) {
    int v0 = 43;
    int v1 = 83;
    int v2 = 81;
    int v3 = 50;
    int v4 = 57;
    int v5 = 26;
    int v6 = 14;
    int v7 = 14;
    int i;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
