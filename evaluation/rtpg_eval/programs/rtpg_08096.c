int test_func(void) {
    int v0 = 30;
    int v1 = 57;
    int v2 = 15;
    int v3 = 52;
    int v4 = 38;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
