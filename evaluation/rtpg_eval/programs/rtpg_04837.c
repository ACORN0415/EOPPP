int test_func(void) {
    int v0 = 34;
    int v1 = 23;
    int v2 = 77;
    int v3 = 96;
    int v4 = 69;
    int v5 = 81;
    int v6 = 83;
    int v7 = 4;
    int i;
    v0 = v0 - v1;
    v3 = v3 + v7;
    for (i = 0; i < 6; i++) {
        v7 = v7 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
