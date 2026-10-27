int test_func(void) {
    int v0 = 57;
    int v1 = 66;
    int v2 = 49;
    int i;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v0;
    }
    v0 = v0 * 10;
    v0 = v0 + v1;
    v2 = v2 - v1;
    return v0;
}
int main(void) { return test_func(); }
