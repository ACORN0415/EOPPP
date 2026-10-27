int test_func(void) {
    int v0 = 30;
    int v1 = 27;
    int v2 = 51;
    int v3 = 96;
    int v4 = 55;
    int v5 = 79;
    int v6 = 42;
    int v7 = 17;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
