int test_func(void) {
    int v0 = 75;
    int v1 = 45;
    int v2 = 40;
    int v3 = 48;
    int v4 = 42;
    int v5 = 98;
    int i;
    v1 = v1 - v0;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
