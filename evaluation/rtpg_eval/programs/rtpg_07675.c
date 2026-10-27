int test_func(void) {
    int v0 = 74;
    int v1 = 72;
    int v2 = 93;
    int v3 = 38;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
