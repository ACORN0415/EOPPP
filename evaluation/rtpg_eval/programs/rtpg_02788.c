int test_func(void) {
    int v0 = 70;
    int v1 = 62;
    int v2 = 75;
    int v3 = 53;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v0;
    }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }
