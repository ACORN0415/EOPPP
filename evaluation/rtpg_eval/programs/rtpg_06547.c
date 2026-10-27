int test_func(void) {
    int v0 = 15;
    int v1 = 35;
    int v2 = 38;
    int v3 = 17;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
