int test_func(void) {
    int v0 = 98;
    int v1 = 26;
    int v2 = 67;
    int v3 = 46;
    int v4 = 50;
    int v5 = 93;
    int v6 = 84;
    int i;
    for (i = 0; i < 5; i++) {
        v6 = v6 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
