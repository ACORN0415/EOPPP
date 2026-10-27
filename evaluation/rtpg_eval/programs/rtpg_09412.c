int test_func(void) {
    int v0 = 14;
    int v1 = 47;
    int v2 = 48;
    int v3 = 35;
    int v4 = 79;
    int v5 = 14;
    int i;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
