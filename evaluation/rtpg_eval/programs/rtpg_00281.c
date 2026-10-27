int test_func(void) {
    int v0 = 37;
    int v1 = 55;
    int v2 = 9;
    int v3 = 17;
    int v4 = 35;
    int v5 = 3;
    int i;
    v0 = v0 * 10;
    v3 = v3 - v1;
    v5 = v5 + v1;
    v2 = v2 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
