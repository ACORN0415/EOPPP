int test_func(void) {
    int v0 = 42;
    int v1 = 39;
    int v2 = 18;
    int v3 = 6;
    int v4 = 48;
    int v5 = 87;
    int i;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
