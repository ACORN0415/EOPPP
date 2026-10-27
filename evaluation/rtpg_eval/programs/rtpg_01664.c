int test_func(void) {
    int v0 = 100;
    int v1 = 83;
    int v2 = 50;
    int v3 = 33;
    int v4 = 38;
    int v5 = 75;
    int i;
    for (i = 0; i < 7; i++) {
        v1 = v1 + v4;
    }
    v5 = v5 + v1;
    return v0;
}
int main(void) { return test_func(); }
