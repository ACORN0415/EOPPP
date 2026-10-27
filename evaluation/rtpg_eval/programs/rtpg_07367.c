int test_func(void) {
    int v0 = 80;
    int v1 = 67;
    int v2 = 87;
    int v3 = 53;
    int v4 = 81;
    int v5 = 19;
    int v6 = 9;
    int v7 = 37;
    int i;
    v0 = v0 - v3;
    v6 = v6 + v0;
    v3 = v3 / (v6 + 1);
    return v0;
}
int main(void) { return test_func(); }
