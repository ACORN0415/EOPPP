int test_func(void) {
    int v0 = 5;
    int v1 = 45;
    int v2 = 54;
    int v3 = 53;
    int v4 = 72;
    int v5 = 27;
    int i;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
