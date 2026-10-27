int test_func(void) {
    int v0 = 5;
    int v1 = 37;
    int v2 = 33;
    int v3 = 75;
    int v4 = 51;
    int v5 = 48;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
