int test_func(void) {
    int v0 = 42;
    int v1 = 51;
    int v2 = 71;
    int v3 = 33;
    int v4 = 37;
    int v5 = 3;
    int v6 = 61;
    int v7 = 27;
    int i;
    v5 = v5 + v5;
    v7 = v7 | v5;
    return v0;
}
int main(void) { return test_func(); }
