int test_func(void) {
    int v0 = 85;
    int v1 = 24;
    int v2 = 25;
    int v3 = 69;
    int v4 = 64;
    int v5 = 1;
    int i;
    v3 = v3 - v1;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v0;
    }
    v1 = 15;
    return v0;
}
int main(void) { return test_func(); }
