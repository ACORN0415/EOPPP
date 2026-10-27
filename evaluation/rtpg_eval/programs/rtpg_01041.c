int test_func(void) {
    int v0 = 44;
    int v1 = 95;
    int v2 = 38;
    int v3 = 85;
    int v4 = 88;
    int v5 = 33;
    int v6 = 72;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v4;
    }
    v1 = v1 + v6;
    v1 = v1 - v3;
    return v0;
}
int main(void) { return test_func(); }
