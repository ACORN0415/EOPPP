int test_func(void) {
    int v0 = 32;
    int v1 = 93;
    int v2 = 94;
    int i;
    v1 = v1 * 10;
    v1 = 57;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
