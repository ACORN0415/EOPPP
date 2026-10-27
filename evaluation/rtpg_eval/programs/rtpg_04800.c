int test_func(void) {
    int v0 = 38;
    int v1 = 84;
    int v2 = 33;
    int i;
    v0 = v0 + v1;
    v0 = v0 * 7;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    v0 = 65;
    return v0;
}
int main(void) { return test_func(); }
