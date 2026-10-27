int test_func(void) {
    int v0 = 49;
    int v1 = 39;
    int v2 = 29;
    int v3 = 86;
    int v4 = 39;
    int v5 = 5;
    int v6 = 54;
    int i;
    for (i = 0; i < 14; i++) {
        v4 = v4 + v4;
    }
    v0 = 83;
    return v0;
}
int main(void) { return test_func(); }
