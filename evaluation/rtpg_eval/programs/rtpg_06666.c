int test_func(void) {
    int v0 = 94;
    int v1 = 14;
    int v2 = 49;
    int v3 = 73;
    int v4 = 29;
    int v5 = 26;
    int v6 = 52;
    int v7 = 92;
    int i;
    for (i = 0; i < 11; i++) {
        v4 = v4 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
