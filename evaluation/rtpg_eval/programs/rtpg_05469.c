int test_func(void) {
    int v0 = 30;
    int v1 = 82;
    int v2 = 2;
    int v3 = 50;
    int v4 = 85;
    int v5 = 81;
    int v6 = 24;
    int v7 = 93;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
