int test_func(void) {
    int v0 = 56;
    int v1 = 7;
    int v2 = 16;
    int v3 = 13;
    int v4 = 65;
    int v5 = 71;
    int v6 = 25;
    int i;
    for (i = 0; i < 12; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
