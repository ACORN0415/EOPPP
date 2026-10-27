int test_func(void) {
    int v0 = 65;
    int v1 = 61;
    int v2 = 73;
    int i;
    v2 = v2 + v0;
    for (i = 0; i < 11; i++) {
        v1 = v1 + v0;
    }
    v1 = v1 * 8;
    return v0;
}
int main(void) { return test_func(); }
