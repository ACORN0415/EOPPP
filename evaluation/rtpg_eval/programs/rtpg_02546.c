int test_func(void) {
    int v0 = 5;
    int v1 = 52;
    int v2 = 79;
    int v3 = 43;
    int v4 = 58;
    int v5 = 74;
    int i;
    for (i = 0; i < 5; i++) {
        v5 = v5 + v3;
    }
    v4 = v4 * 5;
    return v0;
}
int main(void) { return test_func(); }
