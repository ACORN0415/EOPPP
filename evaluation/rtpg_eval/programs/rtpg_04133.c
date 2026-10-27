int test_func(void) {
    int v0 = 100;
    int v1 = 2;
    int v2 = 40;
    int v3 = 18;
    int v4 = 79;
    int v5 = 35;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 15; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
