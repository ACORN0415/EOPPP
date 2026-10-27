int test_func(void) {
    int v0 = 85;
    int v1 = 48;
    int v2 = 42;
    int v3 = 27;
    int v4 = 23;
    int v5 = 70;
    int v6 = 81;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v5;
    }
    v5 = v5 + v1;
    v5 = v5 - v6;
    return v0;
}
int main(void) { return test_func(); }
