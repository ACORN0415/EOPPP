int test_func(void) {
    int v0 = 2;
    int v1 = 9;
    int v2 = 29;
    int v3 = 32;
    int v4 = 85;
    int v5 = 28;
    int v6 = 26;
    int i;
    for (i = 0; i < 7; i++) {
        v5 = v5 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
