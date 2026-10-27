int test_func(void) {
    int v0 = 15;
    int v1 = 63;
    int v2 = 84;
    int v3 = 42;
    int v4 = 85;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
