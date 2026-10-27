int test_func(void) {
    int v0 = 57;
    int v1 = 35;
    int v2 = 57;
    int v3 = 11;
    int i;
    v2 = v2 * 3;
    v1 = v1 - v3;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
