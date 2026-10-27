int test_func(void) {
    int v0 = 29;
    int v1 = 55;
    int v2 = 37;
    int v3 = 75;
    int v4 = 5;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
