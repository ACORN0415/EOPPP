int test_func(void) {
    int v0 = 100;
    int v1 = 40;
    int v2 = 100;
    int v3 = 97;
    int v4 = 85;
    int v5 = 42;
    int v6 = 44;
    int v7 = 87;
    int i;
    for (i = 0; i < 19; i++) {
        v6 = v6 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
