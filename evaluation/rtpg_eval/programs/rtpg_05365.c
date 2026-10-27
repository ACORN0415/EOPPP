int test_func(void) {
    int v0 = 2;
    int v1 = 28;
    int v2 = 12;
    int v3 = 69;
    int v4 = 47;
    int v5 = 67;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
