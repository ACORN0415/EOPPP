int test_func(void) {
    int v0 = 9;
    int v1 = 34;
    int v2 = 27;
    int v3 = 42;
    int v4 = 38;
    int v5 = 84;
    int v6 = 18;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v2;
    }
    v3 = 97;
    v6 = v6 * 7;
    return v0;
}
int main(void) { return test_func(); }
