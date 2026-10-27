int test_func(void) {
    int v0 = 2;
    int v1 = 39;
    int v2 = 37;
    int v3 = 7;
    int v4 = 51;
    int v5 = 34;
    int v6 = 38;
    int v7 = 61;
    int i;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
