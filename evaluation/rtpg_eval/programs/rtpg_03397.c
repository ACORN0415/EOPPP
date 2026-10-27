int test_func(void) {
    int v0 = 30;
    int v1 = 0;
    int v2 = 96;
    int i;
    for (i = 0; i < 7; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 | v0;
    return v0;
}
int main(void) { return test_func(); }
