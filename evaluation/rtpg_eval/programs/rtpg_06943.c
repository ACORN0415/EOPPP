int test_func(void) {
    int v0 = 92;
    int v1 = 57;
    int v2 = 10;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    v2 = v2 + v1;
    v1 = 18;
    v0 = v0 * 3;
    return v0;
}
int main(void) { return test_func(); }
