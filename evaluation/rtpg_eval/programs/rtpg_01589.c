int test_func(void) {
    int v0 = 91;
    int v1 = 24;
    int v2 = 70;
    int v3 = 1;
    int v4 = 33;
    int v5 = 51;
    int v6 = 40;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
