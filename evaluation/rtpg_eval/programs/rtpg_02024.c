int test_func(void) {
    int v0 = 37;
    int v1 = 75;
    int v2 = 96;
    int v3 = 21;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 + v3;
    return v0;
}
int main(void) { return test_func(); }
