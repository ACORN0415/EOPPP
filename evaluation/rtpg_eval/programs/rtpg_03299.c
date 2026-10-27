int test_func(void) {
    int v0 = 58;
    int v1 = 60;
    int v2 = 5;
    int v3 = 12;
    int v4 = 25;
    int v5 = 42;
    int v6 = 60;
    int i;
    for (i = 0; i < 20; i++) {
        v6 = v6 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
