int test_func(void) {
    int v0 = 85;
    int v1 = 96;
    int v2 = 6;
    int i;
    v1 = v1 * 9;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
