int test_func(void) {
    int v0 = 83;
    int v1 = 8;
    int v2 = 5;
    int v3 = 33;
    int v4 = 54;
    int v5 = 53;
    int v6 = 56;
    int v7 = 4;
    int i;
    v2 = v2 - v5;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v1;
    }
    v3 = v3 + v3;
    return v0;
}
int main(void) { return test_func(); }
